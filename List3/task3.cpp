// Kacper Wiszniewski ISSP 338066
#include <iostream>
#include <memory>

// Task 3 - single linked lsit
template <typename T> class Node
{
public:
  Node (T val) : value (val), next (nullptr) {}
  T value;
  std::unique_ptr<Node> next;
};

template <typename T> class ForwardList
{
public:
  std::unique_ptr<Node<T> > head;

  ForwardList () : head (nullptr) {}
  ForwardList (T h) : head (std::make_unique<Node<T> > (h)) {}

  void
  push (T val)
  {
    if (!head)
      {
        head = std::make_unique<Node<T> > (val);
      }
    else
      {
        Node<T> *temp = head.get ();
        while (temp->next)
          {
            temp = temp->next.get ();
          }
        temp->next = std::make_unique<Node<T> > (val);
      }
  }

  void
  display ()
  {
    Node<T> *temp = head.get ();
    std::cout << "{";
    while (temp)
      {
        std::cout << temp->value;
        temp = temp->next.get ();
        if (temp)
          {
            std::cout << ", ";
          }
      }
    std::cout << "}\n";
  }

  void
  reverse ()
  {
    std::unique_ptr<Node<T> > prev = nullptr;
    std::unique_ptr<Node<T> > current = std::move (head);

    while (current)
      {
        std::unique_ptr<Node<T> > next = std::move (current->next);
        current->next = std::move (prev);
        prev = std::move (current);
        current = std::move (next);
      }

    head = std::move (prev);
  }
};

int
main ()
{
  ForwardList<int> list (10);
  list.push (20);
  list.push (30);
  std::cout << "Original list: ";
  list.display ();
  list.reverse ();
  std::cout << "Reversed list: ";
  list.display ();

  ForwardList<char> list1 ('a');
  list1.push ('b');
  list1.push ('c');
  std::cout << "Original list: ";
  list1.display ();
  list1.reverse ();
  std::cout << "Reversed list: ";
  list1.display ();

  return 0;
}
