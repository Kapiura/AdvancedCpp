#pragma once
#ifndef SINGLETON_H
#define SINGLETON_H

class Singleton
{
  private:
    Singleton();
    ~Singleton();

    static int callsCounter;

  public:

    Singleton(const Singleton&) = delete;
    Singleton(Singleton&&) = delete;
    Singleton& operator=(const Singleton&) = delete;
    Singleton& operator=(Singleton&&) = delete;

    static Singleton& instance();
    
    void calls();
};

#endif // SINGLETON_H
