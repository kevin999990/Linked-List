#pragma once
template <class T>
class Node{
    T item;
    Node* next;
    Node();
    Node(T);
};

template <class T>
Node<T>::Node(){
    next = nullptr;
}

template <class T>
Node<T>::Node(T newItem){
    item = newItem;
    next = nullptr;
}
