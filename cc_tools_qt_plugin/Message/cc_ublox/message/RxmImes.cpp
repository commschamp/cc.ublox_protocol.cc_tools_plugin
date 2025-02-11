// Generated by commsdsl2tools_qt v7.0.3

#include "RxmImes.h"

#include "cc_tools_qt/ToolsMessageBase.h"
#include "cc_tools_qt_plugin/Message/cc_ublox/Message.h"
#include "cc_ublox/message/RxmImes.h"

namespace cc_tools_qt_plugin
{

namespace Message
{

namespace cc_ublox
{

namespace message
{

class RxmImesImpl : public
    cc_tools_qt::ToolsMessageBase<
        cc_tools_qt_plugin::Message::cc_ublox::Message,
        ::cc_ublox::message::RxmImes,
        RxmImesImpl
    >
{
public:
    RxmImesImpl() = default;
    RxmImesImpl(const RxmImesImpl&) = default;
    RxmImesImpl(RxmImesImpl&&) = default;
    virtual ~RxmImesImpl() = default;
    RxmImesImpl& operator=(const RxmImesImpl&) = default;
    RxmImesImpl& operator=(RxmImesImpl&&) = default;
};

RxmImes::RxmImes() : m_pImpl(new RxmImesImpl) {}
RxmImes::~RxmImes() = default;

RxmImes& RxmImes::operator=(const RxmImes& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

RxmImes& RxmImes::operator=(RxmImes&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

const char* RxmImes::nameImpl() const
{
    return m_pImpl->name();
}

bool RxmImes::refreshMsgImpl()
{
    return m_pImpl->refreshMsg();
}

qlonglong RxmImes::numericIdImpl() const
{
    return m_pImpl->numericId();
}

QString RxmImes::idAsStringImpl() const
{
    return m_pImpl->idAsString();
}

void RxmImes::resetImpl()
{
    m_pImpl->reset();
}

bool RxmImes::assignImpl(const cc_tools_qt::ToolsMessage& other)
{
    auto* castedOther = dynamic_cast<const RxmImes*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

bool RxmImes::isValidImpl() const
{
    return m_pImpl->isValid();
}

RxmImes::DataSeq RxmImes::encodeDataImpl() const
{
    return m_pImpl->encodeData();
}

bool RxmImes::decodeDataImpl(const DataSeq& data)
{
    return m_pImpl->decodeData(data);
}

RxmImes::Ptr RxmImes::cloneImpl() const
{
    ImplPtr impl(static_cast<RxmImesImpl*>(m_pImpl->clone().release()));
    return Ptr(new RxmImes(std::move(impl)));
}

void RxmImes::assignProtMessageImpl(void* protMsg)
{
    m_pImpl->assignProtMessage(protMsg);
}

RxmImes::DataSeq RxmImes::encodeFramedImpl(cc_tools_qt::ToolsFrame& frame) const
{
    return m_pImpl->encodeFramed(frame);
}

RxmImes::FieldsList RxmImes::transportFieldsImpl()
{
    return m_pImpl->transportFields();
}

RxmImes::FieldsList RxmImes::payloadFieldsImpl()
{
    return m_pImpl->payloadFields();
}

RxmImes::RxmImes(ImplPtr&& impl) :
    m_pImpl(std::move(impl))
{
}

} // namespace message

} // namespace cc_ublox

} // namespace Message

} // namespace cc_tools_qt_plugin
