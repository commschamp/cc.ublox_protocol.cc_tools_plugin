// Generated by commsdsl2tools_qt v7.0.2

#include "RxmPmreq.h"

#include "cc_tools_qt/ToolsMessageBase.h"
#include "cc_tools_qt_plugin/Message/cc_ublox/Message.h"
#include "cc_ublox/message/RxmPmreq.h"

namespace cc_tools_qt_plugin
{

namespace Message
{

namespace cc_ublox
{

namespace message
{

class RxmPmreqImpl : public
    cc_tools_qt::ToolsMessageBase<
        cc_tools_qt_plugin::Message::cc_ublox::Message,
        ::cc_ublox::message::RxmPmreq,
        RxmPmreqImpl
    >
{
public:
    RxmPmreqImpl() = default;
    RxmPmreqImpl(const RxmPmreqImpl&) = default;
    RxmPmreqImpl(RxmPmreqImpl&&) = default;
    virtual ~RxmPmreqImpl() = default;
    RxmPmreqImpl& operator=(const RxmPmreqImpl&) = default;
    RxmPmreqImpl& operator=(RxmPmreqImpl&&) = default;
};

RxmPmreq::RxmPmreq() : m_pImpl(new RxmPmreqImpl) {}
RxmPmreq::~RxmPmreq() = default;

RxmPmreq& RxmPmreq::operator=(const RxmPmreq& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

RxmPmreq& RxmPmreq::operator=(RxmPmreq&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

const char* RxmPmreq::nameImpl() const
{
    return m_pImpl->name();
}

bool RxmPmreq::refreshMsgImpl()
{
    return m_pImpl->refreshMsg();
}

qlonglong RxmPmreq::numericIdImpl() const
{
    return m_pImpl->numericId();
}

QString RxmPmreq::idAsStringImpl() const
{
    return m_pImpl->idAsString();
}

void RxmPmreq::resetImpl()
{
    m_pImpl->reset();
}

bool RxmPmreq::assignImpl(const cc_tools_qt::ToolsMessage& other)
{
    auto* castedOther = dynamic_cast<const RxmPmreq*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

bool RxmPmreq::isValidImpl() const
{
    return m_pImpl->isValid();
}

RxmPmreq::DataSeq RxmPmreq::encodeDataImpl() const
{
    return m_pImpl->encodeData();
}

bool RxmPmreq::decodeDataImpl(const DataSeq& data)
{
    return m_pImpl->decodeData(data);
}

RxmPmreq::Ptr RxmPmreq::cloneImpl() const
{
    ImplPtr impl(static_cast<RxmPmreqImpl*>(m_pImpl->clone().release()));
    return Ptr(new RxmPmreq(std::move(impl)));
}

void RxmPmreq::assignProtMessageImpl(void* protMsg)
{
    m_pImpl->assignProtMessage(protMsg);
}

RxmPmreq::DataSeq RxmPmreq::encodeFramedImpl(cc_tools_qt::ToolsFrame& frame) const
{
    return m_pImpl->encodeFramed(frame);
}

RxmPmreq::FieldsList RxmPmreq::transportFieldsImpl()
{
    return m_pImpl->transportFields();
}

RxmPmreq::FieldsList RxmPmreq::payloadFieldsImpl()
{
    return m_pImpl->payloadFields();
}

RxmPmreq::RxmPmreq(ImplPtr&& impl) :
    m_pImpl(std::move(impl))
{
}

} // namespace message

} // namespace cc_ublox

} // namespace Message

} // namespace cc_tools_qt_plugin
