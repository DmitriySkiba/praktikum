class IntSharedPointer {
public:
    explicit IntSharedPointer(int* ptr = nullptr) : ptr_(ptr), ref_count_(new size_t(1)) {
        if (ptr_ == nullptr) {
            ref_count_ = nullptr;
        }
    }

    ~IntSharedPointer() {
        if (ref_count_ && --(*ref_count_) == 0) {
            delete ptr_;
            delete ref_count_;
        }
    }

    IntSharedPointer(const IntSharedPointer& other) : ptr_(other.ptr_), ref_count_(other.ref_count_) {
        if (ptr_) {
            ++(*ref_count_);
        }
    }

    IntSharedPointer& operator=(IntSharedPointer other) {
        swap(*this, other);
        return *this;
    }

    int& operator*() const {
        return *ptr_;
    }

    friend void swap(IntSharedPointer& lhs, IntSharedPointer& rhs) {
        using std::swap;
        swap(lhs.ptr_, rhs.ptr_);
        swap(lhs.ref_count_, rhs.ref_count_);
    }

private:
    int* ptr_;
    size_t* ref_count_;
};