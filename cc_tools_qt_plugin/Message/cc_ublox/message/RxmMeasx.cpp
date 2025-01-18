// Generated by commsdsl2tools_qt v7.0.2

#include "RxmMeasx.h"

#include "cc_tools_qt/ToolsMessageBase.h"
#include "cc_tools_qt_plugin/Message/cc_ublox/Message.h"
#include "cc_ublox/message/RxmMeasx.h"

namespace cc_tools_qt_plugin
{

namespace Message
{

namespace cc_ublox
{

namespace message
{

class RxmMeasxImpl : public
    cc_tools_qt::ToolsMessageBase<
        cc_tools_qt_plugin::Message::cc_ublox::Message,
        ::cc_ublox::message::RxmMeasx,
        RxmMeasxImpl
    >
{
public:
    RxmMeasxImpl() = default;
    RxmMeasxImpl(const RxmMeasxImpl&) = default;
    RxmMeasxImpl(RxmMeasxImpl&&) = default;
    virtual ~RxmMeasxImpl() = default;
    RxmMeasxImpl& operator=(const RxmMeasxImpl&) = default;
    RxmMeasxImpl& operator=(RxmMeasxImpl&&) = default;
};

RxmMeasx::RxmMeasx() : m_pImpl(new RxmMeasxImpl) {}
RxmMeasx::~RxmMeasx() = default;

RxmMeasx& RxmMeasx::operator=(const RxmMeasx& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

RxmMeasx& RxmMeasx::operator=(RxmMeasx&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

const char* RxmMeasx::nameImpl() const
{
    return m_pImpl->name();
}

bool RxmMeasx::refreshMsgImpl()
{
    return m_pImpl->refreshMsg();
}

qlonglong RxmMeasx::numericIdImpl() const
{
    return m_pImpl->numericId();
}

QString RxmMeasx::idAsStringImpl() const
{
    return m_pImpl->idAsString();
}

void RxmMeasx::resetImpl()
{
    m_pImpl->reset();
}

bool RxmMeasx::assignImpl(const cc_tools_qt::ToolsMessage& other)
{
    auto* castedOther = dynamic_cast<const RxmMeasx*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

bool RxmMeasx::isValidImpl() const
{
    return m_pImpl->isValid();
}

RxmMeasx::DataSeq RxmMeasx::encodeDataImpl() const
{
    return m_pImpl->encodeData();
}

bool RxmMeasx::decodeDataImpl(const DataSeq& data)
{
    return m_pImpl->decodeData(data);
}

RxmMeasx::Ptr RxmMeasx::cloneImpl() const
{
    ImplPtr impl(static_cast<RxmMeasxImpl*>(m_pImpl->clone().release()));
    return Ptr(new RxmMeasx(std::move(impl)));
}

void RxmMeasx::assignProtMessageImpl(void* protMsg)
{
    m_pImpl->assignProtMessage(protMsg);
}

RxmMeasx::DataSeq RxmMeasx::encodeFramedImpl(cc_tools_qt::ToolsFrame& frame) const
{
    return m_pImpl->encodeFramed(frame);
}

RxmMeasx::FieldsList RxmMeasx::transportFieldsImpl()
{
    return m_pImpl->transportFields();
}

RxmMeasx::FieldsList RxmMeasx::payloadFieldsImpl()
{
    return m_pImpl->payloadFields();
}

RxmMeasx::RxmMeasx(ImplPtr&& impl) :
    m_pImpl(std::move(impl))
{
}

} // namespace message

} // namespace cc_ublox

} // namespace Message

} // namespace cc_tools_qt_plugin
