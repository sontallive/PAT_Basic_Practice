#ifndef LIST_H
#define LIST_H
#define DEFAULT_CAPACITY 10

template <typename T>
class List
{
private:
    //列表的容量
    int _capacity;
    
    //列表的长度
    int _length;
    
    //比较器
    bool (*_comparator)(const T& t1,const T& t2);
public:
    //数组指针
    T* data;
    
public:
    //构造器
    List();
    List(int capacity);
    List(List& other);
    ~List();
    
    //在最后插入数据
    void push_back(T t);
    
    //从最后删除一个元素并将其返回
    T pop_back();
    
    //数组自动扩容
    void autoSize();
    
    //返回数组当前大小
    int size(){return _length;}
    
    //在index处删除元素
    T remove(int index);
    
    //在index处添加元素
    void insert(int index,T& t);
    
    //运算符[]
    T& operator[](int index){return data[index];}
    
    //运算符=
    void operator=(List& other);
    
    //设置比较器
    void setComparator(bool (*comparator)(const T& t1,const T& t2)){_comparator = comparator;}
    
    //利用比较器比较两个元素
    int compare(T t1,T t2){return _comparator(t1,t2);}
    
    //利用比较器排序 快速排序
    void sort();
    void sort(int l,int r);
    
    //清空
    void clear();
};

template <typename T>
List<T>::List()
{
    data = new T[DEFAULT_CAPACITY]();
    _capacity = DEFAULT_CAPACITY;
    _length = 0;
}

template <typename T>
List<T>::List(int capacity)
{
    data = new T[capacity]();
    _capacity = capacity;
    _length = 0;
}

template <typename T>
List<T>::List(List& other)
{
    _capacity = other._capacity;
    data = new T[_capacity]();
    
    _length = other._length;
    
    for(int i = 0;i < _length;++i) data[i] = other[i];
}

template <typename T>
List<T>::~List()
{
    delete [] data;
    data = 0;
}

template <typename T>
void List<T>::push_back(T t)
{
    if(_length == _capacity) autoSize();
    data[_length++] = t;
}

template <typename T>
T List<T>::pop_back()
{
    if(_length == 0) throw "nothing to pop!!";
    
    return data[--_length];
}

template <typename T>
T List<T>::remove(int index)
{
    if(index >= _length || index < 0) throw "index out of bound!!";
    
    T t = data[index];
    while(index < _length - 1){
        data[index] = data[index+1];
        index++;
    }
    _length--;
    return t;
}


template <typename T>
void List<T>::insert(int index,T& t)
{
    if(index >= _length || index < 0) throw "index out of bound!!";
    
    if(_length == _capacity) autoSize();
    int temp = index;
    while(index < _length){
        data[index + 1] = data[index];
        index ++;
    }
    data[temp] = t;
    
}

template <typename T>
void List<T>::autoSize()
{
    T* new_data = new T[_capacity*2]();
    for(int i = 0;i < _length;++i){
        new_data[i] = data[i];
    }
    delete [] data;
    data = new_data;
    _capacity *= 2;
    new_data = 0;
}



template <typename T>
void List<T>::sort(int l,int r)
{
    if (l< r)  
    {        
        int i = l, j = r;
        T x = data[l];  
        while (i < j)  
        {  
            while(i < j && !_comparator(data[j],x)) // 从右向左找第一个小于x的数  
                j--;   
            if(i < j)  
                data[i++] = data[j];  
            while(i < j && _comparator(data[i],x)) // 从左向右找第一个大于等于x的数  
                i++;   
            if(i < j)  
                data[j--] = data[i];  
        }  
        data[i] = x;  
        sort(l, i - 1); // 递归调用  
        sort(i + 1, r);  
    }  
}

template <typename T>
void List<T>::sort(){
    sort(0,_length-1);
}

template <typename T>
void List<T>::clear(){
    _length = 0;
}

template <typename T>
void List<T>::operator =(List& other){
    
    _capacity = other._capacity;
    data = new T[_capacity]();
    
    _length = other._length;
    
    for(int i = 0;i < _length;++i) data[i] = other[i];
}

#endif // LIST_H
