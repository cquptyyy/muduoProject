#ifndef MUDUO_BASE_NONCOPYABLE_H
#define MUDUO_BASE_NONCOPYABLE_H


/**
 * noncopyable被继承以后，派生类对象可以正常的构造和析构，但是派生类对象
 * 无法进行拷贝构造和赋值操作
 */ 
class noncopyable
{
public:
    noncopyable(const noncopyable&) = delete;
    noncopyable& operator=(const noncopyable&) = delete;
protected:
    noncopyable() = default;
    ~noncopyable() = default;
};
#endif 
