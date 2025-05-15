class MyClass {
public:
    MyClass();
    MyClass(int a);
    void setValue(int value);
    int getValue() const;
private:
    int value;
    bool isValid(int a) const;
};