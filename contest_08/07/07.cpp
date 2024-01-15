class GreaterAdapter : public IComparator {
    using func = void (*)(int a, int b, bool& verdict);
    func virtual_IComparator;

public:

    GreaterAdapter(func virtual_IComparator) : virtual_IComparator(virtual_IComparator) {
    }

    bool compare(int a, int b) const override {
        bool res;
        virtual_IComparator(a, b, res);
        return res;
    }
};

class KeyFuncLessAdapter : public IComparator {
    
    using func = double (*)(int value);
    func vm;

public:

    KeyFuncLessAdapter(func vm) : vm(vm) {
    }

    bool compare(int a, int b) const override {
        return vm(a) < vm(b);
    }
};