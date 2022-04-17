class NODE
{
  int size;
  NODE* next;
  public:
    NODE(int);
    virtual void show_node();
    virtual void  kill_node();
    void insert(NODE*&);
    NODE* move_next();
    virtual ~NODE();
};
