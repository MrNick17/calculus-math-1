#ifndef ieee
#define ieee

class Ieee {
 private:
  char* bits;

  float to_float() const;

 public:
  Ieee();
  Ieee(float* num);
  Ieee& operator+=(Ieee& in);
  Ieee& operator-=(Ieee& in);

  float epsilon() const;
  float ufl() const;
  float ofl() const;
};

float Ieee::to_float() const {
  return (-1) * *[0]
}

float Ieee::ofl() const {
  return 0;
}

#endif
