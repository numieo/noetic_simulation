#ifndef PLUGIN_EXP_POLYGON_BASE_H_
#define PLUGIN_EXP_POLYGON_BASE_H_

namespace polygon_base
{
  class RegularPolygon
  {
  public:
    virtual void initialize(double side_length) = 0;
    virtual double area() = 0;
    virtual ~RegularPolygon() {}

  protected:
    RegularPolygon() {}
  };
};
#endif
