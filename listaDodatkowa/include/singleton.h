#pragma once
#ifndef SINGLETON_H
#define SINGLETON_H

class Singleton
{
  private:
    Singleton();

  public:
    ~Singleton();

    Singleton(const Singleton&) = delete;
    Singleton operator=(const Singleton&) = delete;

    static int callsCounter;
    static Singleton& instance();
    
    void calls();
};

#endif // SINGLETON_H
