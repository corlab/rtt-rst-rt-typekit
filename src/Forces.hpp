#pragma once

#include <rst-rt/dynamics/Forces.hpp>

#include <boost/serialization/serialization.hpp>
#include <boost/serialization/array.hpp>

#ifdef CORELIB_DATASOURCE_HPP
extern template class RTT::internal::DataSource< ::rstrt::dynamics::Forces >;
extern template class RTT::internal::AssignableDataSource< ::rstrt::dynamics::Forces >;
#endif
#ifdef ORO_CORELIB_DATASOURCES_HPP
extern template class RTT::internal::ValueDataSource< ::rstrt::dynamics::Forces >;
extern template class RTT::internal::ConstantDataSource< ::rstrt::dynamics::Forces >;
extern template class RTT::internal::ReferenceDataSource< ::rstrt::dynamics::Forces >;
#endif
#ifdef ORO_CHANNEL_ELEMENT_HPP
extern template class RTT::base::ChannelElement< ::rstrt::dynamics::Forces >;
#endif
#ifdef ORO_OUTPUT_PORT_HPP
extern template class RTT::OutputPort< ::rstrt::dynamics::Forces >;
#endif
#ifdef ORO_INPUT_PORT_HPP
extern template class RTT::InputPort< ::rstrt::dynamics::Forces >;
#endif
#ifdef ORO_PROPERTY_HPP
extern template class RTT::Property< ::rstrt::dynamics::Forces >;
#endif
#ifdef ORO_CORELIB_ATTRIBUTE_HPP
extern template class RTT::Attribute< ::rstrt::dynamics::Forces >;
#endif

namespace boost {
namespace serialization {

template<typename Archive>
void serialize(Archive& a, ::rstrt::dynamics::Forces& j, unsigned int version) {
    a & make_nvp("forces", j.forces);
}

}
}
