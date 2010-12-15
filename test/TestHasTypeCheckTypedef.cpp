#include "TestHasTypeCheckTypedef.hpp"
#include <boost/detail/lightweight_test.hpp>

int main()
  {
  
  BOOST_TEST((tti::has_type_check_typedef_AnIntType<AType,int>::value));
  BOOST_TEST((tti::NameStruct<AType,AType::AStructType>::value));
  BOOST_TEST((tti::has_type_check_typedef_AnIntTypeReference<AType,int &>::value));
  BOOST_TEST((tti::has_type_check_typedef_BType<AType,AType::BType>::value));
  BOOST_TEST((tti::TheInteger<AType::BType,int>::value));
  BOOST_TEST((tti::has_type_check_typedef_CType<AType::BType,AType::BType::CType>::value));
  BOOST_TEST((tti::has_type_check_typedef_AnotherIntegerType<AType::BType::CType,int>::value));
  BOOST_TEST((tti::SomethingElse<AnotherType,AType::AnIntType>::value));
  BOOST_TEST((!tti::has_type_check_typedef_NoOtherType<AnotherType,double>::value));
  
  return boost::report_errors();

  }
