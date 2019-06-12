#ifndef GOODS_H_
#define GOODS_H_

// Goods class for representing goods information with index and price
// Example:
//    Goods test;
//    test.SetGoodsInfo(1, 10000);
//    std::cout << test.GetIndex() << " - " << test.GetPrice << endl;
class Goods{
 public:
  void SetGoodsInfo(int index, int price);
  inline int GetIndex(){ return goods_index_; };
  inline int GetPrice(){ return goods_price_; };

 private:
  int goods_index_ = 0;
  int goods_price_ = 0;
};


#endif  // GOODS_H_
