// Generated by commsdsl2tools_qt v7.0.0

#include "RxmRaw.h"

#include "cc_tools_qt/ToolsMessageBase.h"
#include "cc_tools_qt_plugin/Message/cc_ublox/Message.h"
#include "cc_ublox/message/RxmRaw.h"

namespace cc_tools_qt_plugin
{

namespace Message
{

namespace cc_ublox
{

namespace message
{

class RxmRawImpl : public
    cc_tools_qt::ToolsMessageBase<
        cc_tools_qt_plugin::Message::cc_ublox::Message,
        ::cc_ublox::message::RxmRaw,
        RxmRawImpl
    >
{
public:
    RxmRawImpl() = default;
    RxmRawImpl(const RxmRawImpl&) = default;
    RxmRawImpl(RxmRawImpl&&) = default;
    virtual ~RxmRawImpl() = default;
    RxmRawImpl& operator=(const RxmRawImpl&) = default;
    RxmRawImpl& operator=(RxmRawImpl&&) = default;
};

RxmRaw::RxmRaw() : m_pImpl(new RxmRawImpl) {}
RxmRaw::~RxmRaw() = default;

RxmRaw& RxmRaw::operator=(const RxmRaw& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

RxmRaw& RxmRaw::operator=(RxmRaw&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

const char* RxmRaw::nameImpl() const
{
    return m_pImpl->name();
}

bool RxmRaw::refreshMsgImpl()
{
    return m_pImpl->refreshMsg();
}

qlonglong RxmRaw::numericIdImpl() const
{
    return m_pImpl->numericId();
}

QString RxmRaw::idAsStringImpl() const
{
    return m_pImpl->idAsString();
}

void RxmRaw::resetImpl()
{
    m_pImpl->reset();
}

bool RxmRaw::assignImpl(const cc_tools_qt::ToolsMessage& other)
{
    auto* castedOther = dynamic_cast<const RxmRaw*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

bool RxmRaw::isValidImpl() const
{
    return m_pImpl->isValid();
}

RxmRaw::DataSeq RxmRaw::encodeDataImpl() const
{
    return m_pImpl->encodeData();
}

bool RxmRaw::decodeDataImpl(const DataSeq& data)
{
    return m_pImpl->decodeData(data);
}

RxmRaw::Ptr RxmRaw::cloneImpl() const
{
    ImplPtr impl(static_cast<RxmRawImpl*>(m_pImpl->clone().release()));
    return Ptr(new RxmRaw(std::move(impl)));
}

void RxmRaw::assignProtMessageImpl(void* protMsg)
{
    m_pImpl->assignProtMessage(protMsg);
}

RxmRaw::DataSeq RxmRaw::encodeFramedImpl(cc_tools_qt::ToolsFrame& frame) const
{
    return m_pImpl->encodeFramed(frame);
}

RxmRaw::FieldsList RxmRaw::transportFieldsImpl()
{
    return m_pImpl->transportFields();
}

RxmRaw::FieldsList RxmRaw::payloadFieldsImpl()
{
    return m_pImpl->payloadFields();
}

RxmRaw::RxmRaw(ImplPtr&& impl) :
    m_pImpl(std::move(impl))
{
}

} // namespace message

} // namespace cc_ublox

} // namespace Message

} // namespace cc_tools_qt_plugin
