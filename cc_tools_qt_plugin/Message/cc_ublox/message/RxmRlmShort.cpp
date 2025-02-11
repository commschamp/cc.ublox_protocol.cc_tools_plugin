// Generated by commsdsl2tools_qt v7.0.3

#include "RxmRlmShort.h"

#include "cc_tools_qt/ToolsMessageBase.h"
#include "cc_tools_qt_plugin/Message/cc_ublox/Message.h"
#include "cc_ublox/message/RxmRlmShort.h"

namespace cc_tools_qt_plugin
{

namespace Message
{

namespace cc_ublox
{

namespace message
{

class RxmRlmShortImpl : public
    cc_tools_qt::ToolsMessageBase<
        cc_tools_qt_plugin::Message::cc_ublox::Message,
        ::cc_ublox::message::RxmRlmShort,
        RxmRlmShortImpl
    >
{
public:
    RxmRlmShortImpl() = default;
    RxmRlmShortImpl(const RxmRlmShortImpl&) = default;
    RxmRlmShortImpl(RxmRlmShortImpl&&) = default;
    virtual ~RxmRlmShortImpl() = default;
    RxmRlmShortImpl& operator=(const RxmRlmShortImpl&) = default;
    RxmRlmShortImpl& operator=(RxmRlmShortImpl&&) = default;
};

RxmRlmShort::RxmRlmShort() : m_pImpl(new RxmRlmShortImpl) {}
RxmRlmShort::~RxmRlmShort() = default;

RxmRlmShort& RxmRlmShort::operator=(const RxmRlmShort& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

RxmRlmShort& RxmRlmShort::operator=(RxmRlmShort&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

const char* RxmRlmShort::nameImpl() const
{
    return m_pImpl->name();
}

bool RxmRlmShort::refreshMsgImpl()
{
    return m_pImpl->refreshMsg();
}

qlonglong RxmRlmShort::numericIdImpl() const
{
    return m_pImpl->numericId();
}

QString RxmRlmShort::idAsStringImpl() const
{
    return m_pImpl->idAsString();
}

void RxmRlmShort::resetImpl()
{
    m_pImpl->reset();
}

bool RxmRlmShort::assignImpl(const cc_tools_qt::ToolsMessage& other)
{
    auto* castedOther = dynamic_cast<const RxmRlmShort*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

bool RxmRlmShort::isValidImpl() const
{
    return m_pImpl->isValid();
}

RxmRlmShort::DataSeq RxmRlmShort::encodeDataImpl() const
{
    return m_pImpl->encodeData();
}

bool RxmRlmShort::decodeDataImpl(const DataSeq& data)
{
    return m_pImpl->decodeData(data);
}

RxmRlmShort::Ptr RxmRlmShort::cloneImpl() const
{
    ImplPtr impl(static_cast<RxmRlmShortImpl*>(m_pImpl->clone().release()));
    return Ptr(new RxmRlmShort(std::move(impl)));
}

void RxmRlmShort::assignProtMessageImpl(void* protMsg)
{
    m_pImpl->assignProtMessage(protMsg);
}

RxmRlmShort::DataSeq RxmRlmShort::encodeFramedImpl(cc_tools_qt::ToolsFrame& frame) const
{
    return m_pImpl->encodeFramed(frame);
}

RxmRlmShort::FieldsList RxmRlmShort::transportFieldsImpl()
{
    return m_pImpl->transportFields();
}

RxmRlmShort::FieldsList RxmRlmShort::payloadFieldsImpl()
{
    return m_pImpl->payloadFields();
}

RxmRlmShort::RxmRlmShort(ImplPtr&& impl) :
    m_pImpl(std::move(impl))
{
}

} // namespace message

} // namespace cc_ublox

} // namespace Message

} // namespace cc_tools_qt_plugin
