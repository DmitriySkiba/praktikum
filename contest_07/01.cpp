#include <vector>
#include <queue>

#include <string>


using namespace std;

class Alarm : public IRunnable {
public:
    void run() {
        cout << "Alarm" << "\n";
    }
};


class OSUpdater : public IRunnable {
public:
    void run() {
        cout << "OSUpdater" << "\n";
    }
};


class ActivityChecker : public IRunnable {

public:
    void run() {
        cout << "ActivityChecker" << "\n";
    }
};

class Clock : public IRunnable, public IClock {

private:
    queue<pair<Time, IRunnable*>> answ;

public:
    void add(IRunnable* client, Time time) {
        answ.push({time, client});
    }
    bool next() {
        
        if (answ.empty() ) {
            return false;
        }
        auto current_time = answ.front();
        
        answ.pop();
        string hour, min, sec;
        
        if (current_time.first.hours < 10) {
            hour = "0";
        }
        hour += to_string(current_time.first.hours);
        
        if (current_time.first.minutes < 10) {
            min = "0";
        }
        min += to_string(current_time.first.minutes);
        
        if (current_time.first.seconds < 10) {
            sec = "0";
        }

        sec += to_string(current_time.first.seconds);
        cout << hour << ":" << min << ":" << sec << " ";
        
        current_time.second -> run();
        
        return true;
    }
    void run() {
        
        while (next());
    }


};