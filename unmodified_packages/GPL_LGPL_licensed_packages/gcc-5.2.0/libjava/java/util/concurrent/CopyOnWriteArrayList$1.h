
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __java_util_concurrent_CopyOnWriteArrayList$1__
#define __java_util_concurrent_CopyOnWriteArrayList$1__

#pragma interface

#include <java/lang/Object.h>

class java::util::concurrent::CopyOnWriteArrayList$1 : public ::java::lang::Object
{

public: // actually package-private
  CopyOnWriteArrayList$1(::java::util::concurrent::CopyOnWriteArrayList$SubList *, jint);
public:
  virtual jboolean hasNext();
  virtual jboolean hasPrevious();
  virtual ::java::lang::Object * next();
  virtual ::java::lang::Object * previous();
  virtual jint nextIndex();
  virtual jint previousIndex();
  virtual void remove();
  virtual void set(::java::lang::Object *);
  virtual void add(::java::lang::Object *);
private:
  ::java::util::ListIterator * __attribute__((aligned(__alignof__( ::java::lang::Object)))) i;
  jint position;
public: // actually package-private
  ::java::util::concurrent::CopyOnWriteArrayList$SubList * this$1;
public:
  static ::java::lang::Class class$;
};

#endif // __java_util_concurrent_CopyOnWriteArrayList$1__