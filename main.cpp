#include<iostream>                     //библиотека    функциее каторые может выполнять програма например (iostream-выводить тексть)
#include<math.h>                       //таже библиотека только матиматические функции 
#include<ctime>                        //чето связоное со временем для рандомайзера
#include<string>                       //массив char
#include<memory>                       // для смарт поинтов
#include<functional>                   // для сылки на функцию
//для работы с файломи
#include<fstream>                      // для работ с файломи
#include<Windows.h>                    // для руского текта
//stl
#include<vector>                      //vector это не пистоле пулимет а умная сылка каторая сама удаляется и тд
#include<list>                        //список-это блок с переменой и сылкой на следущий блок ("масив")
#include<forward_list>                //одна связный лист
#include<array>                       //статичекий масив
#include<deque>                       //внебрачный сын vectora и lista
#include<set>                         //бинарное дерево 
#include<map>                         //бинарное дерево 1  ключь второе даные 
#include<stack>                       //зашол перавям вышвел последний 
#include<queue>                       //очередь работает как очередь 
#include<algorithm>                   //алгоритмы stl
#include<numeric>                     //алгоритм stl //сумма
//потоки
#include<thread>
#include<mutex>
//#include<chrono>           //не нужно по скольку потключино thread 

#include"Sum.h"
#include"Hablon_hluxa.h"
#include"mFunctor.h"
#include"more_less_zero.h"
#include"potocClas.h"
#include"factorial.h"

#define PI 3.14  //константа только работает на всю програму а не на одельную функцию 
#define z "\n" 
#define x "\t"
#define sum2(a,x)((a)+(x)) //макрос)
#define DEBAG 5

typedef std::set<int>::iterator set_int_iterator;

using namespace std;                   //по научному пространство имен     на них проходит действие опиратора или функции например(cout, endl)

mutex mtx;
mutex mtx2;

//раскрой это
/*когда пойдет работа с перемеными цивры в конце будут обазначать тему
 d обозначает дз r работа c видио
 цифры по середине номер работы
я закрою многи вещи чтоб они не мешали удали вот это-->*/   //вот это-->(/**/)<--
//

//не обращяй пока внемание
union shit
{
    int a;
    char d;
};


struct mel
{
    // class только поля изначально прайвет
    int a = 10;
};
class med : public mel
{

};
struct mid :mel
{
    //соответсвено можно не писать публик при наследование 
};


class logman;
class dota;
class neCod;

class human
{
private:
    int a;
protected:
    int d;
public:
    int age = 0;
    string fulname = nullptr;
    virtual string getAge()
    {
        return to_string(age);
    }
};
class student : public human
{
public:
    int curs;
    string getAge() override
    {
        return "возрост студента " + ::human::getAge();
    }
    void vivod()
    {
        cout << "возрос студента " << age << z;
        cout << "курс студента " << curs << z;
        cout << "полное имя студента " << fulname << z;
    }
};
class chkolnic : public human
{
public:
    string getAge() override
    {
        return "возрос школьника " + ::human::getAge();
    }
    int clasHifra;
    char clasBucva;
    void vivod()
    {
        cout << "возрос школьника " << age << z;
        cout << "класс школьника " << clasHifra << clasBucva << z;
        cout << "полное имя школьника " << fulname << z;
    }
};
class nahalniyClass : public chkolnic
{
public:
    int nomerCobineta;
    void vivod()
    {
        cout << "возрос школьника " << age << z;
        cout << "класс школьника " << clasHifra << clasBucva << z;
        cout << "полное имя школьника " << fulname << z;
        cout << "номер класса " << nomerCobineta << z;
    }
};

class qy
{
    friend istream& operator>>(istream& i, qy& qy);
    friend ostream& operator<<(ostream& o, const qy& qy);
    friend void qyq(qy& q);
    int q, y;
    static int id;
    static int col;
public:
    qy()
    {
        q = 0;
        y = 0;
        ++col;
        ++id;
    }
    qy(int valueQ, int valueY) :qy()
    {
        q = valueQ;
        y = valueY;
    }
    qy(const qy& w) :qy()
    {
        this->q = w.q;
        this->y = w.y;
    }
    ~qy()
    {
        col--;
    }
    int GetQ()
    {
        return q;
    }
    void SetQ(int valueQ)
    {
        q = valueQ;
    }
    void vivod()
    {
        cout << "q=" << q << x;
        cout << "y=" << y << z;
    }
    bool operator ==(const qy* a)
    {
        return this->q == a->q && this->y == a->y;
    }
    bool operator !=(const qy* a)
    {
        return this->q != a->q || this->y != a->y;
    }
    qy operator+(const qy& w)
    {
        qy lox;
        lox.q = this->q + w.q;
        lox.y = this->y + w.y;
        return lox;
    }
    qy& operator ++()
    {
        this->q++;
        this->y++;
        return *this;
    }
    qy& operator ++(int naxyu)
    {
        qy t(*this);
        this->q++;
        this->y++;
        return t;
    }
    qy operator=(const qy& w)
    {
        this->q = w.q;
        this->y = w.y;
        return *this;
    }
    void qym(dota w);
    void vId()
    {
        cout << id << z;
    }
    void vivodCol()
    {
        cout << col << z;
    }
    static int getCol()
    {
        return col;
    }
};
int qy::id = 0;
int qy::col = 0;
void qyq(qy& q)
{
    q.q = 0;
}
ostream& operator<<(ostream& o, const qy& qy)
{
    o << qy.q << " " << qy.y;
    return o;
}
istream& operator>>(istream& i, qy& qy)
{
    i >> qy.q >> qy.y;
    return i;
}

class logman
{
    friend student;
    int a;
public:
    logman(int q)
    {
        a = q;
        cout << "класс " << a << " вывод конструкотра" << z;
    }
    ~logman()
    {
        cout << "класс " << a << " вывод диструктора, что обозначает что закончилась работа mine" << z;
    }
};

class axyet
{
    int* q;
    int a;
public:
    axyet(int a)
    {
        this->a = a;
        this->q = new int[a];
        srand(time(NULL));
        for (int i = 0; i < a; i++)
        {
            q[i] = rand() % 10;
        }
        cout << "начало " << this << z;
    }
    axyet(const axyet& w)
    {
        this->a = w.a;
        this->q = new int[w.a];
        for (int i = 0; i < w.a; i++)
        {
            this->q[i] = w.q[i];
        }
        cout << "копирование " << this << z;
    }
    ~axyet()
    {
        cout << "конец " << this << z;
    }
    axyet& operator = (const axyet& w)
    {
        cout << "присваевание " << this << z;
        this->a = w.a;
        if (this->q != nullptr)
        {
            delete[] this->q;
        }
        this->q = new int[w.a];
        for (int i = 0; i < w.a; i++)
        {
            this->q[i] = w.q[i];
        }
        return *this;
    }
    void vm()
    {
        for (int i = 0; i < this->a; i++)
        {
            cout << this->q[i] << x;
        }
        cout << this << z;
    }
};

class ms
{
    char* str;
    int razme;
public:
    ms()
    {
        str = nullptr;
        razme = 0;
        cout << "создание" << x << this << z;
    }
    ms(const char* str)
    {
        razme = strlen(str);
        this->str = new char[razme + 1];
        for (int i = 0; i < razme; i++)
        {
            this->str[i] = str[i];
        }
        this->str[razme] = '\0';
        cout << "создание" << x << this << z;
    }
    ms(ms&& w)
    {
        this->razme = w.razme;
        this->str = w.str;
        w.str = nullptr;
    }
    ~ms()
    {
        delete[] this->str;
        cout << "удаление" << x << this << z;
    }
    void vs()
    {
        cout << str << z;
    }
    ms& operator=(const ms& w)
    {
        if (this->str != nullptr)
        {
            delete this->str;
        }
        razme = strlen(w.str);
        this->str = new char[razme + 1];
        for (int i = 0; i < razme; i++)
        {
            this->str[i] = w.str[i];
        }
        this->str[razme] = '\0';
        return *this;
    }
    ms operator+(const ms& w)
    {
        ms newMs;
        int s1 = strlen(this->str);
        int s2 = strlen(w.str);
        newMs.razme = s1 + s2;
        newMs.str = new char[newMs.razme + 1];
        int i = 0;
        for (; i < s1; i++)
        {
            newMs.str[i] = this->str[i];
        }
        for (int j = 0; j < s2; j++, i++)
        {
            newMs.str[i] = w.str[j];
        }
        newMs.str[newMs.razme] = '\0';

        return newMs;
    }
    bool operator==(const ms& w)
    {
        if (this->razme != w.razme)
        {
            return false;
        }
        else
        {
            for (int i = 0; i < w.razme; i++)
            {
                if (this->str[i] != w.str[i])
                {
                    return false;
                }
            }
        }
        return true;
    }
    bool operator!=(const ms& w)
    {
        if (this->razme == w.razme)
        {
            for (int i = 0; i < w.razme; i++)
            {
                if (this->str[i] == w.str[i])
                {

                }
                else
                {
                    return true;
                }
            }
        }
        else
        {
            return true;
        }
        return this;
    }
    int razmer()
    {
        return razme;
    }
    char& operator[](int q)
    {
        return this->str[q];
    }
};

class dota
{
    int* str0 = new int[2];
    int  str[3]{ 0,1,2 };
public:
    int& operator[](int s)
    {
        return str[s];
    }
    void vm0()
    {
        for (int i = 0; i < 2; i++)
        {
            cout << this->str0[i] << x;
        }
        cout << z;
    }
    void vm();
    friend void qy::qym(dota w);
};
void dota::vm()
{
    for (int i = 0; i < 3; i++)
    {
        cout << this->str[i];
    }
}
void qy::qym(dota w)
{
    w.str0[0] = q;
    w.str0[1] = y;
}

class cod
{
    class cot
    {
    public:
        string matan()
        {
            return "2+2*2=8";
        }
        int a = 1;
        string cot7(int w)
        {
            return "код=кот" + to_string(w) + " честоно";
        }
    };
public:
    void matan()
    {
        cot q;
        cout << q.matan() << z;
    }
    void vm(int w)
    {
        cot q;
        for (int i = 1; i < w + 1; i++)
        {
            cout << q.cot7(i) << z;
        }
    }
    void xexexe();
    //я болею и это записки сумошедшого 
};
class neCod
{
public:
    neCod()
    {

    }
    string neee()
    {
        return "я неее код";
    }
};
void cod::xexexe()
{
    neCod q;
    cout << "ну вы понели......." << q.neee() << z;
}
class noXe
{
public:
    void neXexe()
    {
        neCod q;
        cout << "он гаварит правду......." << q.neee() << z;
    }
};

class A
{
public:
    A()
    {
        cout << "конструктор A" << z;
    }
    A(int q)
    {
        cout << "конструктор A=" << q << z;
    }
    virtual ~A() = 0;
};
A::~A()
{
    cout << "деструктор A" << z;
}
class O
{
public:
    O()
    {
        cout << "конструктор O" << z;
    }
    O(int q)
    {
        cout << "конструктор O=" << q << z;
    }
    virtual ~O()
    {
        cout << "деструктор O" << z;
    }
};
class B :public A, public O
{
public:
    B() :A(), O()
    {
        cout << "конструктор B" << z;
    }
    B(int q) :A(q), O(q)
    {
        cout << "конструктор B=" << q << z;
    }
    ~B() override
    {
        cout << "деструктор B" << z;
    }
};
/*class C :public B
{
    C() :B()
    {
        cout << "конструктор C" << z;
    }
    С(int q) :B(q)
    {
        cout << "конструктор B=" << q << z;
    }
    ~C() override
    {
        cout << "деструктор C" << z;
    }
};*/

class weapon
{
public:
    virtual void hit() = 0;
};
class firearms : public weapon
{
public:
    void hit() override = 0;
};
class pistol : public firearms
{
public:
    void hit() override
    {
        cout << "shot" << z;
    }

};
class submachineGun :public firearms
{
public:
    void hit() override
    {
        cout << "shot shot shot" << z;
    }

};
class rifle :public firearms
{
public:
    void hit() override
    {
        cout << "SHOT....." << z;
    }

};
class coldWeapons :public weapon
{
public:
    void hit() override = 0;

};
class knife : public coldWeapons
{
    void hit() override
    {
        cout << "attack" << z;
    }
};
class soldier
{
public:
    void Hit(weapon* q)
    {
        q->hit();
    }
};

class refrigeratingChamber
{
public:
    void cooling()
    {
        cout << "обект охложден" << z;
    }
    void to()
    {
        cout << "-t^o" << z;
    }
};
class freezerCompartment
{
public:
    void freezing()
    {
        cout << "обек замарозился" << z;
    }
    void to()
    {
        cout << "--t^o" << z;
    }
};
class fridge :public refrigeratingChamber, public freezerCompartment
{

};

class moving
{
public:
    moving()
    {
        cout << "движение" << z;
    }
};
class car :public virtual moving
{
public:
    /*virtual*/ enum speed
    {
        stop,
        speed1,
        speed2 = 100,
        speed3
    };
    car() :moving()
    {
        cout << "ездить" << z;
        speedometer = car::speed::stop;
    }
    speed getSpeedometer()
    {
        return speedometer;
    }
    void setSpeedometer(speed speedometor)
    {
        this->speedometer = speedometor;
    }
protected:
    speed speedometer;
};
class plane :public virtual moving
{
public:
    plane() :moving()
    {
        cout << "летать" << z;
    }
};
class delux :public car, public plane
{
public:
    /* enum speed
     {
         stop,
         speed1 = 100,
         speed2 = 200,
         speed3 = 300
     };*/
    delux() :car(), plane()
    {
        cout << "вобще похуй" << z;
        /*speedometer = car::speed::stop;*/
    }
    /*void setSpeedometer(speed speedometor)
    {
        this->speedometer = speedometor;
    }*/
};

class myException :public exception
{
    int q;
public:
    myException(char const* msg, int q) :exception(msg)
        //ебаный char const.  p.s. просто чтоб вы знали 
    {
        this->q = q;
    }
    int getCheslo()
    {
        return q;
    }
};

template<class T1>
class halava
{
public:
    halava()
    {

    }
    template<class T2> halava(T2 q)
    {
        this->siz(q);
    }
    void siz(T1 q)
    {
        cout << "размер T=" << sizeof(q) << z;

    }
};
template<class T1>
class hluxa :public halava<T1>
{
public:
    hluxa()
    {

    }
    template<class T2> hluxa(T2 q) : halava<T2>(q)
    {
        this->typ(q);
    }
    void typ(T1 q)
    {
        cout << "тип переменой " << typeid(q).name() << z;
    }
};
template<>
class hluxa<int> :public halava<int>
{
public:
    hluxa()
    {

    }
    hluxa(int q) : halava<int>(q)
    {
        this->typ(q);
    }
    void typ(int q)
    {
        cout << "тип переменой <" << typeid(q).name() << ">" << z;
    }
};

template<class T>
class smartPoint
{
    T* ptr;
public:
    smartPoint(T* ptr)
    {
        this->ptr = ptr;
    }
    ~smartPoint()
    {
        delete ptr;
    }
    T& operator*()
    {
        return *ptr;
    }
};

template<class T>
class mlist
{
    template<class T>
    class node
    {
    public:
        node* pNext;
        T data;
        node(T data = T(), node* pNext = nullptr)
        {
            this->data = data;
            this->pNext = pNext;
        }
    };
    int size;
    node<T>* head;
    void wCurr(node<T>* current)
    {
        while (current->pNext != nullptr)
        {
            current = current->pNext;
        }
    }
public:
    mlist()
    {
        size = 0;
        head = nullptr;
    }
    ~mlist()
    {
        this->clear();
    }
    void push_back(T data)
    {
        if (head == nullptr)
        {
            head = new node<T>(data);
        }
        else
        {
            node<T>* current = this->head;
            wCurr(current);
            current->pNext = new node<T>(data);
        }
        size++;
    }
    void push_front(T data)
    {
        this->head = new node<T>(data, this->head);
        size++;
    }
    void insert(T data, int index)
    {
        if (index == 0)
        {
            this->push_front(data);
        }
        else
        {
            node<T>* previous = this->head;
            for (int i = 0; i < index - 1; i++)
            {
                previous = previous->pNext;
            }
            node<T>* newNode = new node<T>(data, previous->pNext);
            previous->pNext = newNode;
            size++;
        }
    }
    void pop_back()
    {
        node<T>* current = this->head;
        wCurr(current);
        delete current->pNext;
        size--;
    }
    void pop_front()
    {
        node<T>* lemp = head;
        head = head->pNext;
        delete lemp;
        size--;
    }
    void removeAt(int index)
    {
        if (index == 0)
        {
            this->pop_front();
        }
        else
        {
            node<T>* previous = this->head;
            for (int i = 0; i < index - 1; i++)
            {
                previous = previous->pNext;
            }
            node<T>* toDelete = previous->pNext;
            previous->pNext = toDelete->pNext;
            delete toDelete;
            size--;
        }
    }
    int getSize()
    {
        return size;
    }
    void clear()
    {
        while (size == 0)
        {
            this->pop_front();
        }
    }
    T& operator[](const int index)
    {
        if (index > this->size)
        {
            return 010;
        }
        int counter = 0;
        node<T>* current = this->head;
        while (current != nullptr)
        {
            if (counter == index)
            {
                return current->data;
            }
            current = current->pNext;
            counter++;
        }
    }
};

class lamba
{
    int a = 0;
public:
    void urus()
    {
        auto f = [this]()
        {
            cout << ++this->a << z;
        };
        f();
    }
};

class STimer
{
    chrono::time_point<chrono::steady_clock> start, end;
public:
    STimer()
    {
        start = chrono::high_resolution_clock::now();
    }
    ~STimer()
    {
        end = chrono::high_resolution_clock::now();
        chrono::duration<float>duration = end - start;
        cout << "время работы=" << duration.count() << " S" << z;
    }
};


int sum1(int a, int d)
{
    return a + d;
}

double sum1(double a, double d)
{
    return a + d;
}

template <class T>
T summ(T a, T b)
{
    return a + b;
}

void rm(int a[], int d)
{
    srand(time(NULL));
    for (int ii = 0; ii < d; ii++)
    {
        a[ii] = rand();
    }
}

void vm(int a[], const int d)
{
    for (int i = 0; i < d; i++)
    {
        cout << a[i] << endl;
    }
}

int rc(int a)
{
    if (a < 1)
    {
        return 0;
    }
    a--;
    cout << a << endl;
    return rc(a);
}

int fc(int a)
{
    if (a == 0)
        return 0;

    if (a == 1)
        return 1;

    return a * fc(a - 1);

}

template <class T1, class T2>
void sw(T1& a, T2& d)
{
    T1 s = 0;
    s = a;
    a = d;
    d = s;
}

void pl(int* pa)
{
    (*pa)++;
}

void rdm(int* const a, const int d)
{
    // srand(time(NULL));
    for (int i = 0; i < d; i++)
    {
        a[i] = rand() % 10;
    }
}

void vdm(const int* const a, const int d)
{
    for (int i = 0; i < d; i++)
    {
        cout << a[i] << "\t";
    }
    cout << endl;
}

void push_back(int*& a1, int& d, const int q)
{
    int* a2 = new int[d + 1];
    for (int i = 0; i < d; i++)
    {
        a2[i] = a1[i];
    }
    a2[d] = q;

    d++;

    delete[]a1;

    a1 = a2;
}

void pop_back(int*& a1, int& d)
{
    d--;

    int* a2 = new int[d];

    for (int i = 0; i < d; i++)
    {
        a2[i] = a1[i];
    }

    delete[]a1;

    a1 = a2;
}

void push_back2(int*& a1, int& d, const int q)
{
    d++;
    int* a2 = new int[d];
    a2[0] = q;
    for (int i = 1; i < d; i++)
    {
        a2[i] = a1[i - 1];
    }
    delete[]a1;
    a1 = a2;
}

void pop_back2(int*& a1, int& d)
{
    d--;
    int* a2 = new int[d];
    for (int i = 0; i < d; i++)
    {
        a2[i] = a1[i + 1];
    }
    delete[]a1;
    a1 = a2;
}

void ppb(int*& a1, int& d, int q)
{
    int* a2 = new int[d];
    for (int i = 0; i < d; i++)
    {
        if (i != q - 1)
        {
            a2[i] = a1[i];
        }
        else
        {
            for (; q < d; q++)
            {
                a2[q - 1] = a1[q];
            }
            d--;
            break;
        }
    }
    delete[]a1;
    a1 = a2;
}

int xy(const char* a)
{
    int q = 0;
    while (a[q] != '\0')
    {
        q++;
    }
    return q;
}

void chlen(int q)
{
    if (q < -10)
    {
        throw("a number less than -10;\tчисло меньше -10\n");
    }
    if (q < 0)
    {
        throw exception("the number of errors is less than 0;\tошибка число меньше 0\n");
    }
    if (q == 0)
    {
        throw 0;
    }
    if (q == 1)
    {
        throw  myException("the error number is 1;\tошибак число равно 1\n", q);
    }
    cout << q << "все ок. все иди" << z;
}

template<class T>
void vMList(mlist<T> q)
{
    for (int i = 0; i < q.getSize(); i++)
    {
        cout << i << " элемент=" << q[i] << z;
    }
}

template<class T>
void printList(const list<T>& q)
{
    for (const auto i = q.cbegin(); i != q.cend(); ++i)   //vector<T>::const_iterator почемуто не получается, кампилятор тупит
    {
        cout << *i << z;
    }
}

/*void pizda(delux& q)
{
    q.setSpeedometer(delux::speed::speed1);
}*/
template<class T>
void printFL(const forward_list<T>& q)
{
    for (const auto& i : q)
    {
        cout << i << z;
    }
}

template<class T>
void zbd(set<T>& a, int& q)
{
    q = rand() % 10;
    /*for (auto& i : a)
    {
        if (q == i)
        {
            break;
        }
    }*/
    cout << q << z;
    a.insert(q);
}

void son()
{
    for (int i = 0; i < 5; i++)
    {
        this_thread::sleep_for(chrono::milliseconds(1000));
        cout << "id=" << this_thread::get_id() << x << i << z;
    }
}

void home(int a, int b)
{
    this_thread::sleep_for(chrono::milliseconds(10000));
    a++;
    cout << "члеееееееее\t" << a << "\tНННННННННННННН" << z;
}

void suka(int& a)
{
    a++;
}

template<class T>
void printVector(const vector<T>& a)
{
    for (int i = 0; i < a.size(); i++)
    {
        cout << a[i] << z;
    }
}

void fchet(const int& a)
{
    if (a % 2 == 0)
    {
        cout << a << z;
    }
}
void fnechet(const int& a)
{
    if (a % 2 != 0)
    {
        cout << a << z;
    }
}
void x3Vec(const vector<int>& vc, function<void(int)> f)
{
    for (int i = 0; i < vc.size(); i++)
    {
        f(vc[i]);
    }
}


template<class T>
void cube(T a)
{
    mtx.lock();
    for (int i = 0; i < 5; i++)
    {
        for (int i = 0; i < 10; i++)
        {
            cout << a;
        }
        cout << endl;
    }
    cout << endl << endl << endl;
    mtx.unlock();
    this_thread::sleep_for(chrono::milliseconds(2000));
}

template<class T>
void cube2(T a)
{
    {
        lock_guard<mutex> guard(mtx);
        for (int i = 0; i < 5; i++)
        {
            for (int i = 0; i < 10; i++)
            {
                cout << a;
            }
            cout << endl;
        }
        cout << endl << endl << endl;
    }
    this_thread::sleep_for(chrono::milliseconds(2000));
}

template<class T>
void cube3(T a)
{
    mtx.lock();
    this_thread::sleep_for(chrono::milliseconds(1));
    mtx2.lock();
    for (int i = 0; i < 5; i++)
    {
        for (int i = 0; i < 10; i++)
        {
            cout << a;
        }
        cout << endl;
    }
    cout << endl << endl << endl;
    this_thread::sleep_for(chrono::milliseconds(2000));
    mtx2.unlock();
    mtx.unlock();
}
template<class T>
void cube4(T a)
{
    mtx2.lock();
    this_thread::sleep_for(chrono::milliseconds(1));
    mtx.lock();
    for (int i = 0; i < 5; i++)
    {
        for (int i = 0; i < 10; i++)
        {
            cout << a;
        }
        cout << endl;
    }
    cout << endl << endl << endl;
    this_thread::sleep_for(chrono::milliseconds(2000));
    mtx.unlock();
    mtx2.unlock();
}

template<class T>
void cube5(T a)
{
    this_thread::sleep_for(chrono::milliseconds(2000));
    unique_lock<mutex>ul(mtx);
    for (int i = 0; i < 5; i++)
    {
        for (int i = 0; i < 10; i++)
        {
            cout << a;
        }
        cout << endl;
    }
    cout << endl << endl << endl;
    ul.unlock();
    this_thread::sleep_for(chrono::milliseconds(2000));
    ul.lock();
}
template<class T>
void cube6(T a)
{
    unique_lock<mutex>ul(mtx, defer_lock);
    this_thread::sleep_for(chrono::milliseconds(2000));
    ul.lock();
    for (int i = 0; i < 5; i++)
    {
        for (int i = 0; i < 10; i++)
        {
            cout << a;
        }
        cout << endl;
    }
    cout << endl << endl << endl;
}
//надо чтоб лок начинался один и тодже

namespace paper
{
    void sum()
    {
        cout << "есть функция sum не из пространство имен" << z;
    }
    namespace fire
    {
        void sum()
        {
            cout << "цыганские фокусы(так можно делать и скласами и с функциями)" << z;
        }
    }
}
//

int main()
{
    /*
    cout << "привет1" << endl; // cout выводить текст как write, endl новая строка
    setlocale(LC_ALL, "rus");  //чтоб можно было выводить руский текст
    cout << "привет2" << endl;
    */

    setlocale(LC_ALL, "rus");

    /*
    cout << "привет3\n";  // с помощи \n можно выаводить текст на следущию строчку не перепутой слешь и это короче
    cout << "привет4\n\n";; //можно пропускать по 2 строчки и больше
    cout << "привет5\t\t\t\t\tпривет6";  //можно сиспользовать пробел \t также можно делать и несколко раз
    cout << "\n\t\t\t\tпривет7" << endl;  //также можно ставить пропуски и пробелы до текста
    cout << "\"\\\'привет8" << endl;  // чтоб добавить в текст ковычик и т д надо перед этим поставить слешь
    cout << "привет9\b" << endl;  // удаляет последний символ
    cout << "привет10\b\b" << endl;  //если использовать например 2 то удалица 1 симмвол вотрой с конца
    cout << "\n\n\n";

    cout << "";

    short r1a, r1b, r1x = 4;  //i (переменая short, int,long отвлечается размером может содержать только целые цисло)
    r1a = 1; //типерь это присваевание а не это:=
    cout << r1a << endl;
    r1a = 2;  //также переменые можно перезначать
    cout << r1a << endl;
    r1b = 3.3;  //мы b присвоели дробное число
    cout << r1b << endl;  //но поскольку int может содержать только целые число дробная часть откидывается (не округляется а выкидывается)
    cout << r1x << endl;  //можно присваевать обозначение вместе с обазночением переменой
    float    r1z = 5.5;  //float, double дробные число
    cout << r1z << endl;
    char      r1c = 'a';  //char обозначение символов
    cout << r1c << endl;
    bool  q1a0, q1d1 = true; // да   1   true    (пишится как 1)    bool обозначение да нет
    q1a0 = false;  // нет  0   false   (пишится как 0)
    cout << q1d1 << endl;
    cout << q1a0 << endl;
    cout << "\n\n\n";

    cout << "";

    const int  R2A = 1;  //константы изменитьь нельзя, константы принета называть большими буквыми
    cout << R2A;
    const char R2B = '\n'; //можно писать пропуск на много проще
    cout << R2B;
    const char R2W = 'q';
    cout << R2W;
    cout << "\n\n\n";

    cout << "";

    int r3a, r3a1, r3a2;
    cout << "введи любое простое число" << z;
    cin >> r3a;  // cin это для того чтобы пользаватель вадил значение (не только число)
    cout << "веди еще числа 2" << x << r3a << z;
    cin >> r3a1 >> r3a2;
    cout << r3a1 << x << r3a2;  //нет а че ты хочешь я ленивый
    cout << z << z << z;

    cout << "";

    int r4a, r4q, r4w, r4s;
    cout << "ведите 1 числа" << z;
    cin >> r4a;
    r4w = -r4a;           //унарный минус единственый  оператор меняет знак
    cout << r4a << "*(-1)=" << r4w << z;
    cout << "ведите 2 число" << z;
    cin >> r4q;
    cout << r4a << "-" << r4q << "=" << r4w << z;
    r4w = r4a + r4q;
    cout << r4a << "+" << r4q << "=" << r4w << z;
    r4w = r4a * r4q;
    cout << r4a << "*" << r4q << "=" << r4w << z;
    r4w = r4a / r4q;   //соответствено можно писать и болии сложные примеры тут законы как и в матише
    cout << r4a << "/" << r4q << "=" << r4w << z;
    cout << "ведите 3 число" << z;
    cin >> r4s;
    r4w = r4a + r4q * r4s;
    cout << r4a << "+" << r4q << "*" << r4s << "=" << r4w << z;
    r4w = (r4a + r4q) * r4s;
    cout << "(" << r4a << "+" << r4q << ")*" << r4s << "=" << r4w;
    cout << z << z << z;

    cout << "";

    double d2a, d2q, d2w, d2s;
    cout << "ведите 3 числа" << z;
    cin >> d2a >> d2q >> d2w;
    cout << d2a << "+" << d2q << "+" << d2w << "=" << d2a + d2q + d2w << z;
    cout << d2a << "*" << d2q << "*" << d2w << "=" << d2a * d2q * d2w << z;
    cout << "средние арефметическое" << d2a << "," << d2q << "," << d2w << "=" << (d2a + d2q + d2w) / 3 << z;
    cout << z << z << z;

    cout << "";

    int r5a = 2, r5w;
    cout << r5a << z;
    r5a = r5a + 1;
    cout << r5a << z;
    r5a++;
    cout << r5a << z;
    r5a--;
    cout << r5a << z;
    cout << r5a++ << z;
    cout << r5a << z;
    cout << ++r5a << z;
    r5a = 1;
    cout << z << z;
    r5w = ++r5a * r5a;
    cout << r5w << x << r5a << z;
    r5a = 1;
    cout << z << z;
    r5w = r5a * ++r5a;   //(++)имеет наивыший приоритет
    cout << r5w << x << r5a;
    cout << z << z << z;

    cout << "";

    cout << (4 > 5) << z;//<меньше    >больше   <=меньше равно  >=больше раво    ==равно  !=не равно
    cout << (4 < 5) << z;  //1 да     0 нет
    cout << (4 <= 5) << z;
    cout << (4 >= 5) << z;
    cout << (4 == 5) << z;
    cout << (4 != 5) << z;
    cout << !(4 < 5) << z;     //   !не   ||или    &&и
    cout << (4 != 5) && (4 > 5);    //надо чтоб и то и то правилтно !=не
    cout << z;
    cout << (4 != 5) || (4 > 5); //хотябы одно да
    cout << z;
    cout << z << z << z;

    cout << "";

    int d3a;
    cout << "ведите целое число" << z;
    cin >> d3a;
    if (d3a % 2 == 0)
    {
        cout << z << d3a << " число четное";
    }
    else
    {
        cout << z << d3a << " число нечетное";
    }
    cout << z << z << z;

    cout << "";

    int r8a;
    cout << "ведите число" << z;
    cin >> r8a;
    switch (r8a)
    {
    case 10061337:
        cout << "!=(это не пасхалка)";
        break;
    case 1:
        cout << "1 серьезно?" << z;
    default:
        cout << "тут есть пасхалка папробуй еше раз";
    }

    cout << "";

    int d4a, d4w, d4q;
    cout << "ведите 2 значение" << z;
    cin >> d4a;
    cin >> d4w;
    cout << z << "вы хотите 1(/) 2(*) 3(+) 4(-)" << z;
    cin >> d4q;
    switch (d4q)
    {
    case 1:
        cout << d4a << "/" << d4w << "=" << (float)d4a / d4w << z;
        break;
    case 2:
        cout << d4a << "*" << d4w << "=" << d4a * d4w << z;
        break;
    case 3:
        cout << d4a << "+" << d4w << "=" << d4a + d4w << z;
        break;
    case 4:
        cout << d4a << "-" << d4w << "=" << d4a - d4w << z;
        break;
    default:
        cout << "ты дебил?" << z;
        break;
    }

    cout << "";

    bool r9a = false;  // да нет если иначе
    if (r9a)
    {
        cout << "идет дождь";
    }
    else
    {
        cout << " дождя нет";
    }
    int r9w;
    cin >> r9w;
    if (r9w > 5)
    {
        cout << "число больше 5";
    }
    else if (r9w = 5)
    {
        cout << "число равно 5";
    }
    else
    {
        cout << "число меньше 5";
    }

    cout << "";

    int r10a;
    cin >> r10a;
    switch (r10a)
    {
    case 1:
        cout << "хуй" << z;
        break;
    case 2:
        cout << ".|." << z;
        break;
    default:
        cout << "не хуй" << z;
        break;
     }

    cout << "";

    int r11a = 0;

    while (r11a < 200)
    {

        r11a++;

        cout <<r11a << "хуй ";

    }

    cout << "";

    int r12a = 0;

    do
    {
        cout << "вот";         //сначало действие если верно то повторениее

    } while (r12a = 1);

    cout << "";

    int d5a, d5w, d5q = 0, d5s;
    cout << "ведите какая должна быть линия" << z << "1 вериткальная" << z << "2 горизантальная" << z;
    cin >> d5a;

    cout << "ведите число из которого вы хотите чтото зделать" << z;
    cin >> d5w;

    cout << "ведите количество символов" << z;
    cin >> d5s;

    switch (d5a)
    {
    case 1:
        while (d5q < d5s)
        {
            d5q++;
            cout << d5w << z;
        }
        break;
    case 2:
        while (d5q < d5s)
        {
            d5q++;
            cout << d5w;
        }
        break;
    }

    cout << "";

    int d6a, d6q, d6w = 0, d6s = 0;

    cout << "видите 2 числа диапазона" << z;
    cin >> d6a;
    cin >> d6q;

    while (d6a <= d6q)
    {
        d6w = (d6a % 2);

        if (d6w == 1)

             {
            d6s += d6a;
             }

      d6a++;

    }

    cout << "сума нечетных чисел диапазона" << x << d6s << z;

    cout << "";

    for (int r13a = 0; r13a < 10; r13a++)
    {
        cout << r13a << x;
    }

    cout << "";

    int r14a = 0;
    for (; r14a < 10; r14a++)
    {
        cout << r14a << z;
    }
    for ( int r14w=0; r14a < 20||r14w<2;r14w++,r14a )
    {
        cout << r14a << x<<r14w<<z;
        r14a++;
    }

    cout << "";

    for (int r14a = 0;; r14a++)
    {
        cout << r14a << z;
        if (r14a == 5)
        {
            break
        }
    }

    cout << "";

    for (int r16a = 0; r16a < 10; r16a++)
    {
        if (r16a == 5 || r16a == 8)
        {
            continue;
        }
        cout << r16a << z;
    }

    cout << "";

    goto lox;    // эту команду не любят жаль эту каманду(
    if (1 == 2)
    {
    lox: cout << "лох" << z;
    }

    cout << "";

    for (int r15a = 0; r15a < 5; r15a++)
    {
        cout << "1 цикл " << r15a << z;
        for (int r15w = 0; r15w < 3; r15w++)
        {
            cout << "2 цикл " << r15w << z;
        }
    }

    cout << "";

    int r18a[4];    //масивы)

    r18a[0] = 5 ;
    r18a[1] = 7 ;
    r18a[2] = 10;
    r18a[3] = 2 ;

    cout << r18a[3] << z;

    cout << "";

    int r19a[]{1,5,7,1,64,2};
    int r19w[1]{};

    cout << "";

    const int R20a = 10;
    int r20w[R20a]{};
    for (int r20z = 0; r20z < R20a; r20z++)
    {
        r20w[r20z+1] = r20q;
            cout << r20w[r20z] << z;
    }

    cout << "";

     int r21a;
    cout << sizeof(r21a) << z;

    cout << "";

    int r22a[5]{1,2,5,8};
    int r22w;
     r22w = sizeof(r22a)/sizeof(int);

    for (int r22q = 0; r22q < r22w; r22q++)
    {
        cout << r22a[r22q] << z;
    }

    cout << "";

    srand(time(NULL));
    int r23a = rand() % 10;           // рандомайзер
    cout << r23a << z;
    r23a = rand() % 100; // остаток от деление уменьшает числа
    cout << r23a << z;
    r23a = rand();
    cout << r23a << z;

    cout << "";

    srand(time(NULL));
    int const R24a = 4;
    int r24q[R24a]{};
    for (int r24w = 0; r24w < R24a; r24w++)
    {
        r24q[r24w] = rand() % 10;
        cout << r24q[r24w] << z;
    }

    cout << "";

    srand(time(NULL));
    int const D7a = 10;
    int d7q[D7a]{};
    int d7s;
    int d7e[D7a]{};
    for (int d7w = 0; d7w < D7a; d7w++)
    {
       d7z: d7s = rand() % 20;
        for (int d7z = 0; d7z<D7a; d7z++)
        {
            if (d7s == d7q[d7z])
            {
                goto d7z;
            }
        }
        d7q[d7w] = d7s;
        cout << d7q[d7w] << z;
       }
    int d7c=21;
    for (int i = 0; i < D7a; i++)
    {
        if (d7c > d7q[i])
        {
            d7c = d7q[i];
        }
    }
    cout << z << d7c << z;

    cout << "";

    int const R25q = 2, R25a = 2;
    int r25z[R25q][R25a]
    {
        {0,8},
        {5}
    };
    int a;
    a=1;

    cout << "";

    srand(time(NULL));
    int const R26q = 3, R26a = 5;
    int r26z[R26q][R26a]{};
    for (int r26w=0;r26w<R26q;r25w++)
    {
        for (int r26s = 0; r26s < R26a; r26s++)
        {
            r26z[r26w][r26s] = rand();
            cout << r26z[r26w][r26s] << x;
        }
        cout << z;
    }

    cout << "";

    //самое время взглянуть на 14 строчку
    int r27a = 0;
    r27a = sy(r27a);
    cout << r27a;

    cout << "";

    int const r28a = 5;
    int r28q[r28a];
    rm(r28q, r28a);
    vm(r28q, r28a);

    cout << "";

    int r28aa;
    r28aa = sum(35, 1.1);
    cout << r28aa;

    cout << "";

    rc(5);

    cout << "";

    int r29a;
    cin >> r29a;
    cout << fc(r29a) << z;

    cout << "";

    int r40a = 5;
    int *pr30x = &a;
    int *pr30x2 = &a;
    cout << r30a << z;
    cout << pr30x << z;
    cout << pr30x2 << z;
    *pr30x2 = 2;
    cout << r30a << z;
    cout << pr30x2 << z;
    cout << *pr30x << z;

    cout << "";

    const int R31a = 5;
    int r31q[R31a];
    rm(r31q, R31a);
    //vm(r31q, R31a);

    int* r31z = r31q;
    for (int r31w = 0; r31w < R31a; r31w++)
    {
        cout << *(r31z + r31w) << z;
    }

    cout << "";

    int r32a = 0;
    cout << r32a << z;
    pl(&r32a);
    cout << r32a << z;

    cout << "";

    int d8q = 4;
    double d8a = 7.3;
    cout << "d8a=" << d8a << z;
    cout << "d8q=" << d8q << z;
    sw(d8a, d8q);
    cout << "d8a=" << d8a << z;
    cout << "d8q=" << d8q << z;

    cout << "";

    int r33a = 5;
    int& r33q = r33a; //сылкак как указатель, только сылка работает сразу с чеслом а не с адресом
    cout << "цисло" << x << r33a << z;
    cout << "сылка" << x << r33q << z;
    r33q = 10;
    cout << "цисло" << x << r33a << z;
    cout << "сылка" << x << r33q << z;

    cout << "";

    int* r33a = new int;
    *r33a = 10;
    cout << *r33a << z;
    delete r33a;     //чистим даные в оперотивки
    r33a = nullptr;  //чистим сылку

    cout << "";

    int r34q = 4;
    int* r34a = new int[r34q];
    srand(time(NULL));
    for (int r34w = 0; r34w < r34q; r34w++)
    {
        r34a[r34w] = rand() % 10;
    }
    for (int r34s = 0; r34s < r34q; r34s++)
    {
        cout << r34a + r34s << x;
        cout << r34a[r34s] << z;
     }
    delete[]r34a;

    cout << "";

    srand(time(NULL));
    int r35q = 4, r35w = 5;
    int **r35a = new int* [r35q];
    for (int i = 0; i < r35q; i++)
    {
        r35a[i] = new int[r35w];
    }
    for (int i = 0; i < r35q; i++)
    {
        for (int j=0; j < r35w; j++)
        {
            r35a[i][j] = rand() % 100;
            cout << r35a[i][j] << x;
        }
        cout << z;
    }
    for (int i = 0; i < r35q; i++)
    {
        delete [] r35a[i];
    }
    //удаление сылок в массивы
    delete [] r35a;

    cout << "";

    int r36q = 4;
    int* r36a1 = new int[r36q];
    rdm(r36a1, r36q);
    int* r36a2 = new int[r36q];
    rdm(r36a2, r36q);
    cout << "массив 1 = ";
    vdm(r36a1, r36q);
    cout << "массив 2 = ";
    vdm(r36a2, r36q);
    cout << z << z << "массив 1 = массив 2" << z << z << z;
    delete[] r36a1;
    r36a1 = new int[r36q];
    for (int i = 0; i < r36q; i++)
    {
        r36a1[i] = r36a2[i];
    }
    cout << "массив 1 = ";
    vdm(r36a1, r36q);
    cout << "массив 2 = ";
    vdm(r36a2, r36q);
    delete[]r36a1;
    delete[]r36a2;

    cout << "";

    int r37q = 4;
    int* r37a = new int[r37q];
    rdm(r37a, r37q);
    vdm(r37a, r37q);
    cout << z << "push_back" << z << z;
    push_back(r37a, r37q, 836);
    vdm(r37a, r37q);
    cout << z << "pop_back" << z << z;
    pop_back(r37a, r37q);
    vdm(r37a, r37q);
    delete[]r37a;

    cout << "";

    int d9q = 4;
    int* d9a = new int[d9q];
    rdm(d9a, d9q);
    vdm(d9a, d9q);
    cout << z << "push_back2" << z << z;
    push_back2(d9a, d9q, 9);
    vdm(d9a, d9q);
    cout << z << "pop_back2" << z << z;
    pop_back2(d9a, d9q);
    vdm(d9a, d9q);
    cout << z << "ppb" << z << z;
    ppb(d9a, d9q, 3);
    vdm(d9a, d9q);
    delete[]d9a;

    cout << "";

    char r38a[] = ".|.";
    cout << r38a << z << z;
    char r38q[] = { '.','|','.','\0' };
    cout << r38q << z;
    cout << strlen(r38q) << z;

    cout << "";

    double a = 33.3;
    cout << (int)a << z;
    cout << (bool)a << z;
    cout << (char)a << z;
    int d = 10;
    cout << a / d << z;
    //таблица Саски)
    for (int i = 0; i < 256; i++)
    {
        cout << "code = " << i << x << "char = " << (char)i << z;
    }

    cout << "";

    const char* r39a = "xyu!";
    cout << r39a << z << z;
    char r39q[] = "cyka!";
    const char* r39s = r39q;
    cout << r39s << z << z;
    const int R39z = 3;
    const char* r39w[R39z]{ "blya!" };
    r39w[1] = r39a;
    r39w[2] = r39q;
    for (int i = 0; i < R39z; i++)
    {
        cout << r39w[i] << z;
    }

    cout << "";

    const char* d10q = "XYU!!!)8";
    xy(d10q);

    cout << "";

    const int r40q = 255;
    char r40a1[r40q] = "XYU ";
    char r40a2[r40q] = "NA";
    cout << r40a2;
    strcat(r40a2, r40a1);//не работает на этой версии везуал сдусиас
    cout << r40a2;

    cout << "";

    int(*silca)(int a, int d);
    silca = sum;
    cout << silca(4, 8);

    cout << "";

    cout << sum2(1, 4.5);

    cout << "";

    #ifdef DEBAG
    cout << "Xyu" << z;
    #else
    cout << "nexyu" << z;
    #endif
    cout << z << z << z;
    #ifndef DEBAG
    cout << "nexyu" << z;
    #else
    cout << "Xyu" << z;
    #endif
    cout << z << z << z;
    #if DEBAG>4
    cout << "Xyu>4" << z;
    #else
    cout << "nexyu" << z;
    #endif
    cout << z << z << z;
    #if DEBAG<4
    cout << "Xyu" << z;
    #elif DEBAG == 5
    cout << "nexyu=5" << z;
    #endif

    cout << "";

    int r40a = 1;

    if (r40a == 1)
    {
        cout << "a==1" << z;
    }
    else if (r40a>1)
    {
        cout << "a>1" << z;
    }
    else
    {
        cout << "a<1" << z;
    }

    (r40a == 1) ? cout << "a==1" << z : (r40a > 1) ? cout << "a>1" << z : cout << "a<1" << z;

    cout << "";

    student r41a;
    r41a.age = 16;
    r41a.curs = 1;
    r41a.fulname = "Митин Вячеслав Андреевич";

    cout << "возрос 1 студента " << r41a.age << z;
    cout << "курс 1 студента " << r41a.curs << z;
    cout << "полное имя 1 студента " << r41a.fulname << z;

    cout << "";

    student r41a;

    r41a.age = 16;
    r41a.curs = 2;
    r41a.fulname = "Митин Вячеслав Андреевич";

    r41a.vivod();

    cout << "";

    qy r42a;
    r42a.SetQ(4);
    cout << r42a.GetQ() << z;
    //так нужно делать при рабте с класами

    cout << "";

    qy r43a(1, 2);
    r43a.vivod();

    cout << "";

    logman r44a(1);
    logman r44d(2);

    cout << "";

    dota r45a;

    cout << "";

    axyet r46a(4);
    r46a.vm();
    axyet r46d(r46a);
    r46d.vm();

    cout << "";

    axyet r47a(5);
    axyet r47d(4);
    r47a = r47d;
    r47a.vm();
    r47d.vm();
    axyet r47q = r47a;
    r47q.vm();

    cout << "";

    ms s1a1(".|.");
    s1a1.vs();
    ms s1a2("hah");
    s1a2.vs();
    ms s1a3;
    s1a3 = s1a2;
    s1a3.vs();
    ms s1a4 (s1a1 + s1a2);
    s1a4.vs();

    cout << "";

    qy r48a(1, 2);
    qy r48q(3, 6);
    qy r48w = r48a + r48q;
    r48w.vivod();

    cout << "";

    qy r49a(1, 1);
    qy r49q = r49a++;
    r49q.vivod();
    r49a.vivod();
    cout << z;
    qy r49w = (++r49a);
    r49w.vivod();

    cout << "";

    dota r50a;
    cout << r50a[0] << z;
    r50a[0] = 1;
    cout << r50a[0] << z;

    cout << "";

    qy r51a(1, 1);
    qyq(r51a);
    r51a.vivod();

    cout << "";

    qy r52a(9, 3);
    dota r52q;
    r52a.qym(r52q);
    r52q.vm0();

    cout << "";

    ms s2a1("опять ");
    ms s2a2("я рот... ");
    ms s2a3;
    s2a3 = s2a1 + s2a2;
    s2a3.vs();
    cout << s2a1.razmer() << z;
    cout << s2a2.razmer() << z;
    cout << s2a3.razmer() << z;
    bool s2q = s2a1 != s2a2;
    if (s2q)
    {
        cout << "правда" << z;
    }
    else
    {
        cout << "не правда" << z;
    }

    cout << "";

    student r53a;
    logman r53q(17);
    cout << z;
    r53a.ageA(r53q);
    cout << z;
    r53a.vivod();

    cout << "";

    qy r54a;
    qy r54q(1, 1);
    cout << r54a.col << z;
    for (int i = 0; i < 1; i++)
    {
        qy r54w;
        cout << r54w.col << z;
    }
    cout << r54q.col << z;

    cout << "";

    qy r55a;
    qy r55q(1, 2);
    cout << "вывод r55a" << x;
    r55a.vId();
    cout << z;
    cout << "вывод r55q" << x;
    r55q.vId();
    cout << z;

    cout << "";

    int r056q = 4;
    string r056a[1];
    r056a[0] = to_string(r056q);  //превращяет int в char
    cout << r056a[0];

    cout << "";

    cod r56a;
    r56a.vm(5);

    cout << "";

    const int R57q = 2;
    const int R57w = 3;
    qy r57a[R57q][R57w]
    {
      {
       qy(2,3),
       qy(5,2),
       qy(8,1),
      },
      {
       qy(2,1),
       qy(5,6),
       qy(2,8),
      },
    };
    for (int i = 0; i < R57q; i++)
    {
        for (int j = 0; j < R57w; j++)
        {
            r57a[i][j].vivod();
            r57a[i][j].vId();
        }
        cout << z ;
    }
    qy* r57z = new qy[R57w];
    r57z[0].SetQ(3);
    r57z[0].vivod();
    r57z[0].vId();
    delete[]r57z;

    cout << "";

    cod r58a;
    r58a.matan();
    neCod r58q;
    cout << r58q.neee() << z;
    r58a.xexexe();
    noXe r58w;
    r58w.neXexe();

    cout << "";

    C r59a(4);
    cout << z;
    C r59q;
    cout << z << z;

    cout << "";

    submachineGun r60w;
    soldier r60a;
    cout << z << z;
    r60a.Hit(&r60w);
    cout << z << z;

    cout << "";

    A* r61a = new B;
    delete r61a;

    cout << "";

    qy r62a(2,3);
    qy r62q(r62a);
    r62q.vivod();
    r62q.vivodCol();
    r62a.vId();
    r62q.vId();

    cout << "";

    nahalniyClass r63a;
    r63a.age = 9;
    cout << r63a.getAge() << z;

    cout << "";

    fridge r64a;
    r64a.cooling();
    r64a.freezing();
    refrigeratingChamber* r64q = &r64a;
    //r64q.

    cout << "";

    C r65a;
    B r65q(3);

    cout << "";

    fridge r66a;
    ((refrigeratingChamber)r66a).to();
    ((freezerCompartment)r66a).to();

    cout << "";

    delux r67a;
    */

    ofstream del;

    /*
    ofstream r68a;
    string r68q = "сука работает толь с файломи";
    r68a.open(r68q);
    if (!r68a.is_open())
    {
        cout << "фаел не открылся" << z;
    }
    else
    {
        r68a << "achot";
        r68a.close();
    }
    r68a.open(r68q);
    r68a.close();
    */

    string w("lol");
    
    /*
    ofstream r69a;
    ifstream r69w;
    char r69q;
    r69a.open(w);
    if (!r69a.is_open())
    {
        cout << "фаел не открылся" << z;
    }
    else
    {
        r69a <<"606\nBOO!!!";
        r69a.close();
    }
    r69w.open(w);
    if (!r69w.is_open())
    {
        cout << "фаел не открылся" << z;
    }
    else
    {
        char r69q;
        while (r69w.get(r69q))
        {
            cout << r69q;
        }
        r69w.close();
    }
    cout << z << z;
    r69w.open(w);
    if (!r69w.is_open())
    {
        cout << "фаел не открылся" << z;
    }
    else
    {
        string r69q;
        while (!r69w.eof())
        {
            r69q = "";
            getline(r69w, r69q);
            cout << r69q << z;
        }
        r69w.close();
    }
    del.open(w);
    del.close();

    cout << "";

    ofstream r70q;
    ifstream r70w;
    r70q.open(w, ofstream::app);
    if (!r70q.is_open())
    {
        cout << "ошибка" << z;
    }
    else
    {
        srand(time(NULL));
        cout << "все ок" << z;
        for (int i = 0; i < 3; i++)
        {
            qy r70a(rand() % 10, rand() % 10);
            r70q.write((char*)&r70a, sizeof(r70a));
        }
        r70q.close();

        r70w.open(w);
        if (!r70w.is_open())
        {
            cout << "ошибка" << z;
        }
        else
        {
            cout << "все ок" << z;
            qy r70a;
            while (r70w.read((char*)&r70a, sizeof(qy)))
            {
                r70a.vivod();
            }
            r70w.close();
        }
    }
    del.open(w);
    del.close();

    cout << "";

    fstream r71a;
    r71a.open(w, fstream::in | fstream::out | fstream::app);
    if (!r71a.is_open())
    {
        cout << "ошибка" << z;
    }
    else
    {
        srand(time(NULL));
        int r71q;
        for (int i = 0; i < 3; i++)
        {
            r71q = rand() % 3;
            if (r71q == 0)
            {
                SetConsoleCP(1251);
                r71a << "нихуя0" << z;
                SetConsoleCP(866);
            }
            else if (r71q == 1)
            {
                r71a << "vRot1" << z;
            }
            else if (r71q == 2)
            {
                r71a << r71q << "03131030103103" << r71q << z;
            }

        }
        r71a.close();
    }
    r71a.open(w, fstream::in | fstream::out | fstream::app);
    if (!r71a.is_open())
    {
        cout << "ошибка" << z;
    }
    else
    {
        string r71w;

        while (!r71a.eof())
        {
            r71w = "";
            r71a >> (r71w);
            //getline(r71a, r71w);
            cout << r71w << z;
        }
        r71a.close();
   }
    del.open(w);
    del.close();

    cout << "";
    /*
    ofstream r72a;
    r72a.open(w, ofstream::app);
    if (!r72a.is_open())
    {
        cout << "ошибка" << z;
    }
    else
    {
        srand(time(NULL));
        for (int i = 0; i < 3; i++)
        {
          qy r72w(rand() % 10, rand() % 10);
          r72a << r72w << z;
          cout << r72w << z;
        }
        r72a.close();
        cout << z << z;
        ifstream r72q;
        r72q.open(w);
        if (!r72q.is_open())
        {
            cout << "ошибка";
        }
        else
        {
            while (true)
            {
                qy r72w;
                r72q >> r72w;
                if (r72q.eof())
                {
                    break;
                }
                cout << r72w << z;
            }
            r72q.close();
        }
    }

    del.open(w);
    del.close();

    cout << "";

    ifstream r72a;
    r72a.exceptions(ifstream::badbit | ifstream::failbit);
    try
    {
        r72a.open("dasrgft");
        r72a.close();
    }
    catch (const ifstream::failure& e)
    {
        cout << e.code() << z;
        cout << e.what() << z;
    }

    cout << "";

    srand(time(NULL));
    const int r73q = 100;
    int r73a[r73q];
    for (int i = 0; i < r73q; i++)
    {
        r73a[i] = rand() % 10;
    }
    int r73w = 5;
    bool r73s = false;
    int r73z = 0;
    for (int i = 0; i < r73q; i++)
    {
        if (r73a[i] == r73w)
        {
            r73s = true;
            r73z++;
        }
    }
    if (r73s)
    {
        cout << "в массиве число-" << r73w << " есть " << r73z << " раз" << z;
    }

    cout << "";

    int r74q = -1;
    try
    {
        chlen(r74q);
    }
    catch (const exception q)
    {
        cout << q.what();
    }

    cout << "";

    int r75q = -11;
    try
    {
        chlen(r75q);
    }
    catch (const exception q)
    {
        cout << q.what();
    }
    catch (const char* q)
    {
        cout << q;
    }
    r75q = 0;
    try
    {
        chlen(r75q);
    }
    catch (const exception q)
    {
        cout << q.what();
    }
    catch (const char* q)
    {
        cout << q;
    }
    catch (...)
    {
        cout << "chlen" << z;
    }

    cout << "";

    int r76q = 1;
    try
    {
        chlen(r76q);
    }
    catch (myException &q)
    {
        cout << q.what();
        cout << q.getCheslo();
    }

    cout << "";

    paper::sum();
    paper::fire::sum();

    cout << "";

    int r77q = 1;
    hluxa<int> r77a;
    r77a.siz(r77q);
    r77a.typ(r77q);

    cout << "";

    int r78q = 1;
    hluxa<int> r78a(r78q);
    // АААААА!!!!!!! сам без видео, с помощю мозга и поисковика я зделал сам!!!!

    cout << "";

    hluxa<int> r79a(1);
    hluxa<char> r79q('w');

    cout << "";

    mel r80a;
    r80a.a;
    med r80q;
    r80q.a;
    mid r80w;
    r80w.a;

    cout << "";

    smartPoint<int> r81a = new int(1);
    *r81a = 3;
    cout << *r81a << z;

    cout << "";

    //не ну тут отладчик
    auto_ptr<int> r82a1(new int(1));
    auto_ptr<int> r82a2(r82a1);
    unique_ptr<int> r82q1(new int(1));
    unique_ptr<int> r82q2;
    auto_ptr<int> r82q3(new int(2));
    r82q2 = move(r82q1);
    r82q1 = move(r82q3);
    r82q2.swap(r82q1);
    cout << "укозатель " << r82q1.get() << "\tчисло " << *r82q1.get();
    int* r82w1q = new int(1);
    unique_ptr<int> r82w1a(r82w1q);
    r82w1a.reset();
    int* r82w2q = new int(1);
    unique_ptr<int>r82w2a(r82w2q);
    r82w2a.release();
    delete r82w2q;
    shared_ptr<int> r82s1(new int(1));
    shared_ptr<int>r82s2(r82s1);

    cout << "";

    int r83q = 3;
    shared_ptr<int[]>r83a(new int[r83q] {});
    srand(time(NULL));
    for (int i = 0; i < r83q; i++)
    {
        r83a[i] = rand() % 10;
        cout << r83a[i] << z;
    }

    cout << "";

    list<int> r84a;
    srand(time(NULL));
    for (int i = 0; i < 6; i++)
    {
        r84a.push_back(rand() % 10);
    }
    for (int i = 0; i < r84a.getSize(); i++)
    {
        cout << r84a[i] << z;
    }

    cout << "";

    list<int> r85a;
    for (int i = 0; i < 5; i++)
    {
        r85a.push_back(i);
    }
    cout << "первый элемент=" << r85a[0] << x << "второй элемент=" << r85a[1] << z << "удаление первго элемента" << z;
    r85a.pop_front();
    cout << "первый элемент=" << r85a[0] << z;
    cout << z;
    cout << "всего элементов=" << r85a.getSize() << z << "очищение листа(или как там я непомню)" << z;
    r85a.clear();
    cout << "всего элементов=" << r85a.getSize() << z;

    cout << "";

    list<int> r86a;
    r86a.push_front(1);
    r86a.push_front(2);
    r86a.push_front(3);
    cout << "добовляет чилсо в первый элемент" << z;
    vList(r86a);
    cout << z;
    r86a.insert(4, 0);
    vList(r86a);
    cout << z;
    r86a.insert(5, 2);
    vList(r86a);
    cout << z;
    r86a.removeAt(0);
    vList(r86a);
    cout << z;
    r86a.removeAt(2);
    vList(r86a);
    cout << z;
    r86a.pop_back();
    vList(r86a);

    cout << "";

    //видио урока небыло просто стало интересно вот и проверил
    list<int> r87q;
    list<list<int>> r87a;
    r87q.push_back(00);
    r87a.push_front(r87q);
    cout << "00\t" << r87a[0][0] << z;
    r87q[0] = 1;
    cout << "00\t" << r87a[0][0] << z;
    r87a[0].push_back(2);
    cout << "01\t" << r87a[0][1] << z;
    r87a.push_back(r87q);
    cout << "10\t" << r87a[1][0] << z;
    cout << "11\t" << r87a[1][1] << z;
    r87q[0] = 3;
    cout << "00\t" << r87a[0][0] << z;
    cout << "01\t" << r87a[1][0] << z;

    cout << "";

    vector<int>r88a = {4};
    r88a.push_back(0);
    r88a.push_back(1);
    r88a.push_back(2);
    r88a[0] = 3;
    for (int i = 0; i < r88a.size(); i++)
    {
        cout << i << x << r88a[i] << z;
    }
    cout << z;
    cout << "размер=" << r88a.size() << z;
    cout << "запас=" << r88a.capacity() << z;
    cout << z;
    r88a.push_back(5);
    cout << "размер=" << r88a.size() << z;
    cout << "запас=" << r88a.capacity() << z;
    cout << z;
    r88a.reserve(8);
    cout << "размер=" << r88a.size() << z;
    cout << "запас=" << r88a.capacity() << z;
    cout << z;
    r88a.shrink_to_fit();
    cout << "размер=" << r88a.size() << z;
    cout << "запас=" << r88a.capacity() << z;
    cout << z;
    //r88a.at(5)    //всегда выкидавыет ошибку при использование не существующего элемента в масиве
    r88a.pop_back();
    for (int i = 0; i < r88a.size(); i++)
    {
        cout << i << x << r88a[i] << z;
    }
    cout << z;
    cout << r88a.size() << z;
    r88a.clear();
    cout << r88a.size() << z;
    cout << z;
    vector<int> r88q(10, 1);
    for (int i = 0; i < r88q.size(); i++)
    {
        cout << i << x << r88q[i] << z;
    }
    cout << z;
    r88q.clear();
    cout << r88q.size() << z;
    cout << z;
    r88q.resize(8);
    for (int i = 0; i < r88q.size(); i++)
    {
        cout << i << x << r88q[i] << z;
    }

    cout << "";
    /*
    auto r89a = 1;
    auto r89q = 'q';
    //auto r89w; //не получится
    vector<int> r89s = { 0,1,2 };
    vector<int>::iterator r89s1 = r89s.begin();
    auto r89s2 = r89s.begin();//меньше писать
    //как по мне хуйня хотя кто его знает

    cout << "";

    int r90a[] = { 0,1,2 };
    cout << r90a[1] << z;
    cout << *(r90a + 1) << z;
    cout << z;
    vector<int> r90w = { 0,1,2,3,4,5 };
    vector<int>::iterator r90q = r90w.begin();
    *(r90q + 4) = 5;
    cout << *(r90q+4) << z;
    r90q++;//будь осторожней
    cout << *r90q << z;
    cout << z;
    int j = 0;
    for (vector<int>::iterator i = r90w.begin(); i != r90w.end(); i++)
    {
        *i = j;
        cout << *i << z;
        j++;
    }
    cout << z;
    vector<int>::const_iterator r90q0 = r90w.begin();
    //*i = j//не получится
    cout << *r90q0 << z;
    cout << z;
    vector<int>::const_iterator r90q1 = r90w.cbegin();
    //vector<int>::iterator r90q2 = r90w.cbegin();//не получится
    for (vector<int>::const_reverse_iterator i = r90w.rbegin(); i != r90w.rend(); i++)
    {
        cout << *i << z;
    }
    cout << z;
    r90q = r90w.begin();
    advance(r90q, 3);
    cout << *r90q << z;
    advance(r90q, -3);
    cout << *r90q << z;
    
    cout << "";
    
    vector<int> r91a = { 0,1,2 };
    for (vector<int>::iterator i = r91a.begin(); i != r91a.end(); i++)
    {
        cout << *i << z;
    }
    cout << z;
    vector<int>::iterator r91q = r91a.begin();
    r91a.insert((r91q + 1), 3);
    for (vector<int>::iterator i = r91a.begin(); i != r91a.end(); i++)
    {
        cout << *i << z;
    }
    cout << z;
    r91q = r91a.begin();
    r91a.erase(r91q+2);
    for (vector<int>::iterator i = r91a.begin(); i != r91a.end(); i++)
    {
        cout << *i << z;
    }
    cout << z;
    r91a.push_back(1);
    r91a.push_back(4);
    for (vector<int>::iterator i = r91a.begin(); i != r91a.end(); i++)
    {
        cout << *i << z;
    }
    cout << z;
    r91q = r91a.begin();
    r91a.erase(r91q, r91q + 3);
    for (vector<int>::iterator i = r91a.begin(); i != r91a.end(); i++)
    {
        cout << *i << z;
    }
    
    cout << "";
    
    list<int> r92a = { 0,1 };
    r92a.push_back(2);
    r92a.push_front(3);
    //r92a[0];//не работает
    for (list<int>::iterator i = r92a.begin(); i != r92a.end(); ++i)
    {
        cout << *i << z;
    }
    cout << z;
    r92a.sort();
    printList(r92a);
    cout << z;
    cout << r92a.size() << z;
    cout << z;
    r92a.pop_back();
    printList(r92a);
    cout << z;
    r92a.pop_front();
    printList(r92a);
    cout << z;
    r92a.push_back(1);
    r92a.push_back(1);
    r92a.push_back(1);
    printList(r92a);
    cout << z;
    r92a.unique();  //удаляет повторяющие друг за другом число
    printList(r92a);
    cout << z;
    r92a.pop_back();
    r92a.push_back(4);
    r92a.push_back(0);
    printList(r92a);
    cout << z;
    r92a.reverse();
    printList(r92a);
    cout << z;
    cout << r92a.size() << z;
    cout << z;
    r92a.clear();
    cout << r92a.size() << z;
    cout << z;
    r92a.push_front(6);
    r92a.push_front(7);
    r92a.push_front(8);
    list<int>::iterator r92it = r92a.begin();
    r92a.insert(++r92it, 5);
    printList(r92a);
    cout << z;
    r92it = r92a.begin();
    advance(r92it, 3);
    r92a.insert(r92it, 9);
    printList(r92a);
    cout << z;
    r92it = r92a.begin();
    advance(r92it, 2);
    r92a.erase(r92it);
    printList(r92a);
    cout << z;
    r92it = r92a.begin();
    r92a.remove(5);//Удаление всех чисел x
    printList(r92a);
    cout << z;
    r92a.assign(3, 10);//удаляе все элементы и заполняет список водимымыми даноми 
    printList(r92a);
    cout << z;
    list<int>r92a0 = { 0,1,2,3 };
    r92a.assign(r92a0.begin(), r92a0.end());
    printList(r92a);
    cout << z;
    
    cout << "";
    
    int r93a[3]{ 0,1,2 };
    for (auto i : r93a)
    {
        i++;
        cout << i << z;
    //у самого масива теже значения
    }
    cout << z;
    for (auto i : r93a)
    {
        cout << i << z;
    }
    cout << z << z;
    //for each (auto i in r93a)
    //{
    //    cout << i << z;
    //}
    //сахар должен работать но нет 
    for (auto& i : r93a)
    {
        i++;
        cout << i << z;
    }
    cout << z;
    for (auto& i : r93a)
    {
        cout << i << z;
        //ту же масив помениял значение
    }
    
    cout << "";
    
    list<int> r94a = { 0,1,2,3,4 };
    for (const auto &i : r94a)
    {
        cout << i << z;
    }
    
    cout << "";
    
    forward_list<int> r95a = { 0,1,2,3 };
    r95a.push_front(4);
    r95a.push_front(5);
    forward_list<int>::iterator r95it = r95a.begin();
    r95it++;
    //r95it--;//не получися
    r95it = r95a.begin();
    for (const auto &i : r95a)
    {
        cout << i << z;
    }
    cout << z;
    advance(r95it, 4);
    r95a.insert_after(r95it, 6);
    printFL(r95a);
    cout << z;
    r95it = r95a.begin();
    advance(r95it, 3);
    r95a.pop_front();
    r95a.erase_after(r95it);
    printFL(r95a);
    cout << z;
    r95it = r95a.before_begin();
    r95a.erase_after(r95it);
    printFL(r95a);
    cout << z;
    r95it = r95a.begin();
    //r95it[1]//естествено не работает
    
    cout << "";
    /*
    array<int, 4>r96a = { 0,1,2,3};
    cout << r96a[0] << z;
    try
    {
        //cout << r96a[5] << z;
        cout << r96a.at(5) << z;
    }
    catch (const std::exception& q)
    {
        cout << q.what() << z;
    }
    cout << r96a.size() << z;
    r96a.fill(6);
    cout << z;
    for (auto i : r96a)
    {
        cout << i << z;
    }
    
    cout << "";
    
    array<int, 3>r97a1 = { 0,1,2 };
    array<int, 3>r97a2 = { 0,1,2 };
    bool r97q = r97a1 == r97a2;
    cout <<r97q << z;
    r97a1[0] = 1;
    r97q = r97a1 < r97a2;
    cout << r97q << z;
    r97a1[0] = 0;
    r97q = r97a1 <= r97a2;
    cout << r97q << z;
    
    cout << "";
    
    deque<int> r98a = { 0,1,2 };
    deque<int>::iterator r98it = r98a.begin();
    r98it++;
    r98it--;
    cout << r98a[1] << z;
    
    cout << "";
    
    srand(time(NULL));
    set<int> r99a{0,1};
    r99a.erase(1);
    int r99q = rand() % 10;
    cout << r99q << z;
    r99a.insert(r99q);
    zbd(r99a, r99q);
    zbd(r99a, r99q);
    zbd(r99a, r99q);
    zbd(r99a, r99q);
    cout << z;
    for (auto& i : r99a)
    {
        cout << i << z;
    }
    cout << z;
    set_int_iterator r99it = r99a.find(2);
    if (r99it != r99a.end())
    {
        cout << *r99it << z;
        cout << z;
    }
    
    cout << "";
    
    multiset<int> r100a{ 0,1,6,1,5,4,3,2 };
    r100a.insert(2);
    cout << *r100a.lower_bound(1) << z;
    cout << *r100a.upper_bound(1) << z;
    cout << z;
    for (auto& i : r100a)
    {
        cout << i << z;
    }
    auto r100q = r100a.equal_range(1); //отладчик
    
    cout << "";
    
    pair<int, string>r101a0(1, "ло...");
    cout << r101a0.first << z;
    cout << r101a0.second << z;
    cout << z;
    map<int, string>r101a;
    r101a.insert(pair<int, string>(1, "лол)."));
    r101a.emplace(3, "чл...");
    r101a.insert(make_pair(2, "ху..."));
    r101a.emplace(0, "пиз...");
    r101a.emplace(3, "чел");
    auto r101it = r101a.find(1);
    cout << r101it->second << z;
    cout << r101it->first << z;
    r101a[0] = "Питер";
    cout << r101a[0];
    r101a[4] = "чебурек";
    r101a.erase(1);
    cout << r101a[1] << z;
    cout << z;
    multimap<int, string>r101w;
    r101w.emplace(0, "лол");
    r101w.emplace(0, "кек");
    r101w.emplace(1, "суп");
    r101w.emplace(1, "логман");
    for (auto& i : r101w)
    {
        cout << i.first << z;
        cout << i.second << z;
        cout << z;
    }
    
    cout << "";
    
    cout << this_thread::get_id() << z;
    this_thread::sleep_for(chrono::milliseconds(2000));
    cout << "лох" << z;
    cout << z;
    thread r102a1(son);
    thread r102a2(son);
    r102a2.detach();
    for (int i = 0; i < 5; i++)
    {
        this_thread::sleep_for(chrono::milliseconds(500));
        cout << "id=" << this_thread::get_id() << x << i << z;
    }
    r102a1.join();
    
    cout << "";
    
    srand(time(NULL));
    stack<int>r103a;// ={}; не получится
    r103a.push(0);
    r103a.emplace(1);//тоже самое что и push только быстрее
    cout << r103a.size() << z;
    cout << z;
    cout << r103a.empty() << z;
    cout << z;
    r103a.pop();
    cout << r103a.top() << z;
    cout << z;
    r103a.emplace(rand() % 10);
    r103a.emplace(rand() % 10);
    r103a.emplace(rand() % 10);
    while (!r103a.empty())
    {
        cout << r103a.top() << z;
        r103a.pop();
    }
    cout << z;
    r103a.emplace(2);
    auto r103w = r103a._Get_container();
    cout << r103w[0] << z;
    cout << z;
    stack<int, forward_list<int>> r103q;// самый оптимизированое использование стека
    
    cout << "";
    
    thread r104q(home, 1, 2);
    while (true)
    {
        cout << "ПРОГРАМА РАБОТАЕТ!!!!!!!!! ПОНЕЛ СУКА" << z;
        this_thread::sleep_for(chrono::milliseconds(1000));
    }
    r104q.join();
    
    cout << "";
    
    queue<int> r105a;//так же не работает ={};
    r105a.push(0);
    r105a.emplace(1);
    r105a.emplace(2); 
    r105a.emplace(3);
    cout << r105a.back() << z;
    cout << z;
    cout << r105a.size() << z;
    cout << z;
    while (!r105a.empty())
    {
        cout << r105a.front() << z;
        r105a.pop();
    }
    auto r105w = r105a._Get_container();
    queue<int, list<int>> r105q;//выгодней всего
    
    cout << "";
    
    priority_queue<int>r106a;
    r106a.push(0);
    r106a.emplace(1);
    r106a.emplace(2);
    r106a.emplace(3);
    cout << r106a.size() << z;
    cout << z;
    while (!r106a.empty())
    {
        cout << r106a.top() << z;
        r106a.pop();
    }
    cout << z;
    
    cout << "";
    
    cout << Sum(2, 3) << z;
    Hablon_hluxa r107a;
    r107a.yes(1);
    
    cout << "";
    
    int r108q = 5;
    thread r108a(suka, ref(r108q));
    r108a.join();
    cout << r108q << z;
    
    cout << "";
    
    shit r109q;
    r109q.a = 1;
    cout << "a=" << r109q.a << z;
    cout << "d=" << r109q.d << z;
    cout << z;
    r109q.d = 'x';
    cout << "a=" << r109q.a << z;
    cout << "d=" << r109q.d << z;
    
    cout << "";
    
    vector<int> r110 = { 0,1,2,3,4,5,6,7,8,9 };
    x3Vec(r110, fchet);
    cout << z;
    x3Vec(r110, fnechet);
    
    cout << "";
    
    vector<int> r111a = { 0,1,2,3 };
    auto r111q = [&r111a]()
    {
        r111a.emplace_back(4);
    };
    r111q();
    x3Vec(r111a, [](int a)
        {
            cout << "чле" << a << z;
        });
    cout << z;
    auto r111w = []()
    {
        return 1;
    };
    auto r111s = r111w;
    auto r111z = r111s();
    cout << r111z << z;
    
    cout << "";
    
    int r112q;
    thread r112a([&r112q]()
        {
            r112q = summ(2, 5);
        });
    r112a.join();
    cout << r112q << z;
    
    cout << "";
    
    int r113q = 0;
    auto r113a = [=]()
    {
        cout << r113q << z;
        //r113q=1//значение без сылки
    };
    r113a();
    cout << z;
    auto r113s = [=]()mutable
    {
        r113q++;
        cout << r113q;
    };
    r113s();
    cout << z;
    auto r113w = [&]()
    {
        r113q++;
        cout << r113q << z;
    };
    r113w();
    cout << z;
    lamba r113z;
    r113z.urus();
    auto r113x = []()->int
    {
        return 0;
    };
    auto r113e = r113x();
    
    cout << "";
    
    chrono::time_point<chrono::steady_clock> r114s = chrono::high_resolution_clock::now();
    this_thread::sleep_for(chrono::milliseconds(1000));
    chrono::time_point<chrono::steady_clock> r114e = chrono::high_resolution_clock::now();
    chrono::duration<float> r114a = r114e - r114s;
    cout << r114a.count() << z;
    cout << z;
    STimer r114w;
    this_thread::sleep_for(chrono::milliseconds(1000));
    
    cout << "";
    
    mFunctor r115a;
    r115a(0); 
    r115a(1); 
    r115a(5);
    cout << r115a.getA() << z;
    
    cout << "";
    
    vector<int> r116a = { 0,1,-1,2,-2,3 };
    cout << count_if(r116a.begin(), r116a.end(), more_zero) << z;
    cout << count_if(r116a.begin(), r116a.end(), less_zero) << z;
    cout << z;
    sort(r116a.begin(), r116a.end(), [](int a, int b)
        {
            return a < b;
        });
    printVector(r116a);
    cout << z;
    sort(r116a.begin(), r116a.end(), [](int a, int b)
        {
            return a > b;
        });
    printVector(r116a);
    cout << z;
    const int R116SIZE = 5;
    int r116w[] = { 7,0,4,2,8 };
    sort(r116w, r116w + R116SIZE);
    vm(r116w, R116SIZE);
    
    cout << "";
    
    vector<int> r117a = { 0,1,2,3,4,5,6 };
    int r117w = 0;
    auto r117q = find(r117a.begin(), r117a.end(), r117w);
    if (r117q == r117a.end())
    {
        cout << "число " << r117w << " нету в колекции\n";
    }
    else
    {
        cout << "число " << r117w << " есть в колекции\n";
    }
    cout << z;
    r117q = find_if(r117a.begin(), r117a.end(), [=](int a)
        {
            return a < r117w;
        });
    if (r117q == r117a.end())
    {
        cout << "-\n";
    }
    else
    {
        cout << "+\n";
    }
    cout << z;
    r117q = find_if_not(r117a.begin(), r117a.end(), [=](int a)
        {
            return a < r117w;
        });
    if (r117q == r117a.end())
    {
        cout << "-\n";
    }
    else
    {
        cout << "+\n";
    }
    
    cout << "";
    
    vector<int> r118a = { 0,1,2,3 };
    vector<int> r118w;
    copy(r118a.begin(), r118a.end(), back_inserter(r118w));
    printVector(r118w);
    cout << z;
    r118w.clear();
    copy_if(r118a.begin(), r118a.end(), back_inserter(r118w), [](const int& a)
        {
            return a % 2 != 0;
        });
    printVector(r118w);
    */
    cout << "";
    /*
    vector<int>r119a = { 1,-4,2,1,1,4,-5,56 };
    cout << r119a.size() << z;
    cout << z;
    auto r119q = remove(r119a.begin(), r119a.end(), 1);//функция не удаляет элементы а переносит в конец колькции и делает что то типо перегородки, функция возрощяет эту перегородку 
    cout << r119a.size() << z;
    cout << z;
    r119a.erase(r119q, r119a.end());
    cout << r119a.size() << z;
    cout << z;
    cout << z;
    printVector(r119a);
    cout << z;
    r119a.erase(remove_if(r119a.begin(), r119a.end(), [](const int& a)
        {
            return a < 0;
        }), r119a.end());
    printVector(r119a);
    */
    cout << "";
    /*
    vector<int> r120a = { 1,4,51,6,34,85,9 };
    auto r120q = max_element(r120a.begin(), r120a.end());
    cout << (*r120q)++ << z;
    cout << *r120q++ << z;
    cout << *r120q << z;
    cout << z;
    r120q = min_element(r120a.begin(), r120a.end());
    cout << *r120q << z;
    cout << z;
    auto r20q2 = minmax_element(r120a.begin(), r120a.end());
    cout << *r20q1.first << z;
    cout << *r20q1.second << z;
    */
    cout << "";
    /*
    potocClas r121a;
    thread r121q([&]()
        {
            r121a.PCfuncia();
        });
    this_thread::sleep_for(chrono::milliseconds(1000));
    thread r121q2(&potocClas::PCfuncia, r121a);
    this_thread::sleep_for(chrono::milliseconds(1000));
    thread r121q3(&potocClas::PCfuncia2, r121a, 1);
    r121q.join();
    r121q2.join();
    r121q3.join();
    */
    cout << "";
    /*
    vector<int> r122a = { 1,2,3,4,5,6 };
    cout << accumulate(r122a.begin(), r122a.end(), 0) << z;
    cout << z;
    int r122w[] = { 1,2,3,4,5 };
    cout << accumulate(begin(r122w), end(r122w), 0) << z;
    cout << z;
    cout << accumulate(r122a.begin(), r122a.end(), 1, [](int a, int b)
        {
            return a * b;
        });
    */
    cout << "";
    /*
    vector<int>r123a = { 1,2,3 };
    list<int>r123w = { 1,2,3 };
    cout << equal(r123a.begin(), r123a.end(), r123w.begin(), r123w.end()) << z;
    cout << z;
    list<int>::iterator r123wq = r123w.begin();
    *r123wq = 0;
    cout << equal(r123a.begin(), r123a.end(), r123w.begin(), r123w.end()) << z;
    cout << z;
    auto r123q = mismatch(r123a.begin(), r123a.end(), r123w.begin(), r123w.end());
    if (r123q.first == r123a.end() && r123q.second == r123w.end())
    {
        cout << "+" << z;
    }
    else
    {
        cout << "-" << z;
        cout << *r123q.first << z;
        cout << *r123q.second << z;
    }
    */
    cout << "";
    /*
    thread r124a([]()
        {
            cube('x');
        });
    thread r124w([]()
        {
            cube('ч');
        });
    r124a.join();
    r124w.join();
    */
    cout << "";
    /*
    thread r125a([]()
        {
            cube('x');
        });
    thread r125w([]()
        {
            cube2('ч');
        });
    r125a.join();
    r125w.join();
    */
    cout << "";
    /*
    thread r126a([]()
        {
            cube3('x');
        });
    thread r126w([]()
        {
            cube4('ч');
        });
    r126a.join();
    r126w.join();
    */
    cout << "";
    /*
    vector<int> r127a = { 0,1,2,3 };
    for_each(r127a.begin(), r127a.end(),[](int &a)
        {
            cout << ++a << z;
        });
    */
    cout << "";
    /*
    thread r128a([]()
        {
            cout << factorial(4) << z;
        });
    thread r128w([]()
        {
            cout << factorial(5) << z;
        });
    r128a.join();
    r128w.join();
    */
    cout << "";
    /*
    vector<int> r129a = { 1,5,5,5,4,4,2,1,1,1 };
    auto r129q = unique(r129a.begin(), r129a.end()); //удаляет не все одинаковые элементы а повторяющиеся подрят 
    r129a.erase(r129q, r129a.end());
    printVector(r129a);

    cout << z;
    r129a.erase(r129a.begin(), r129a.end());

    r129a = { 1,5,5,5,4,4,2,1,1,1 };
    list<int> r129w;
    unique_copy(r129a.begin(), r129a.end(), back_inserter(r129w));
    printList(r129w);
    */
    cout << "";
    /*
    srand(time(NULL));//тоже самое что и rand
    vector<int> r130a = { 1,2,3,4,5,6 };
    random_shuffle(r130a.begin(), r130a.end());
    printVector(r130a);
    */
    cout << "";
    /*
    thread r131a(cube5<int>, 1);
    thread r131w(cube6<int>, 2);
    r131a.join();
    r131w.join();
    */
    cout << "";
    //57
    unsigned long int a = ((4 ^ 30) * (5 ^ 57))%(10^49);
    int b = 0;
    for ( int i = 0; i < a; a=a/10)
    {
        b += a % 10;
    }

    cout << b;
    return 0;
}

/*
int main(int argc, char* argv[])
{
    setlocale(LC_ALL, "rus");
    for (int i = 0; i < argc; i++)
    {
        cout << argv[i] << z;
    }
    system("pause");
    return 0;
}
*/
// чтото сложное но в будущем скорее всего пригодится 