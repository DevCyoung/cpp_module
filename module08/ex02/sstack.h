//template<class T, Class C = deque<T> >
//class std::stack {
//
//protected:
//
//    C c;
//
//public:
//
//    typedef typename C::value_type value_type;
//
//    typedef typename C::size_type size_type;
//
//    typedef C container_type;
//
//    explicit stack(const C& a = C()) : c(a) {} // Inherit the constructor
//
//    bool empty() const { return c.empty(); }
//
//    size_type size() const { return c.size(); }
//
//    value_type& top() const { return c.back(); }
//
//    const value_type& top() const { return c.back(); }
//
//    void push(const value_type& n) { c.push_back(n); }
//
//    void pop() { c.pop_back(); }
//
//};