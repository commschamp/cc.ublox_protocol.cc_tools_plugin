// Generated by commsdsl2tools_qt v7.0.3

#include "RxmRlmLong.h"

#include "cc_tools_qt/ToolsMessageBase.h"
#include "cc_tools_qt_plugin/Message/cc_ublox/Message.h"
#include "cc_ublox/message/RxmRlmLong.h"

namespace cc_tools_qt_plugin
{

namespace Message
{

namespace cc_ublox
{

namespace message
{

class RxmRlmLongImpl : public
    cc_tools_qt::ToolsMessageBase<
        cc_tools_qt_plugin::Message::cc_ublox::Message,
        ::cc_ublox::message::RxmRlmLong,
        RxmRlmLongImpl
    >
{
public:
    RxmRlmLongImpl() = default;
    RxmRlmLongImpl(const RxmRlmLongImpl&) = default;
    RxmRlmLongImpl(RxmRlmLongImpl&&) = default;
    virtual ~RxmRlmLongImpl() = default;
    RxmRlmLongImpl& operator=(const RxmRlmLongImpl&) = default;
    RxmRlmLongImpl& operator=(RxmRlmLongImpl&&) = default;
};

RxmRlmLong::RxmRlmLong() : m_pImpl(new RxmRlmLongImpl) {}
RxmRlmLong::~RxmRlmLong() = default;

RxmRlmLong& RxmRlmLong::operator=(const RxmRlmLong& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

RxmRlmLong& RxmRlmLong::operator=(RxmRlmLong&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

const char* RxmRlmLong::nameImpl() const
{
    return m_pImpl->name();
}

bool RxmRlmLong::refreshMsgImpl()
{
    return m_pImpl->refreshMsg();
}

qlonglong RxmRlmLong::numericIdImpl() const
{
    return m_pImpl->numericId();
}

QString RxmRlmLong::idAsStringImpl() const
{
    return m_pImpl->idAsString();
}

void RxmRlmLong::resetImpl()
{
    m_pImpl->reset();
}

bool RxmRlmLong::assignImpl(const cc_tools_qt::ToolsMessage& other)
{
    auto* castedOther = dynamic_cast<const RxmRlmLong*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

bool RxmRlmLong::isValidImpl() const
{
    return m_pImpl->isValid();
}

RxmRlmLong::DataSeq RxmRlmLong::encodeDataImpl() const
{
    return m_pImpl->encodeData();
}

bool RxmRlmLong::decodeDataImpl(const DataSeq& data)
{
    return m_pImpl->decodeData(data);
}

RxmRlmLong::Ptr RxmRlmLong::cloneImpl() const
{
    ImplPtr impl(static_cast<RxmRlmLongImpl*>(m_pImpl->clone().release()));
    return Ptr(new RxmRlmLong(std::move(impl)));
}

void RxmRlmLong::assignProtMessageImpl(void* protMsg)
{
    m_pImpl->assignProtMessage(protMsg);
}

RxmRlmLong::DataSeq RxmRlmLong::encodeFramedImpl(cc_tools_qt::ToolsFrame& frame) const
{
    return m_pImpl->encodeFramed(frame);
}

RxmRlmLong::FieldsList RxmRlmLong::transportFieldsImpl()
{
    return m_pImpl->transportFields();
}

RxmRlmLong::FieldsList RxmRlmLong::payloadFieldsImpl()
{
    return m_pImpl->payloadFields();
}

RxmRlmLong::RxmRlmLong(ImplPtr&& impl) :
    m_pImpl(std::move(impl))
{
}

} // namespace message

} // namespace cc_ublox

} // namespace Message

} // namespace cc_tools_qt_plugin
