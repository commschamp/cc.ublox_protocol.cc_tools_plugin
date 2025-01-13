// Generated by commsdsl2tools_qt v7.0.0

#include "MonRxbuf.h"

#include "cc_tools_qt/ToolsMessageBase.h"
#include "cc_tools_qt_plugin/Message/cc_ublox/Message.h"
#include "cc_ublox/message/MonRxbuf.h"

namespace cc_tools_qt_plugin
{

namespace Message
{

namespace cc_ublox
{

namespace message
{

class MonRxbufImpl : public
    cc_tools_qt::ToolsMessageBase<
        cc_tools_qt_plugin::Message::cc_ublox::Message,
        ::cc_ublox::message::MonRxbuf,
        MonRxbufImpl
    >
{
public:
    MonRxbufImpl() = default;
    MonRxbufImpl(const MonRxbufImpl&) = default;
    MonRxbufImpl(MonRxbufImpl&&) = default;
    virtual ~MonRxbufImpl() = default;
    MonRxbufImpl& operator=(const MonRxbufImpl&) = default;
    MonRxbufImpl& operator=(MonRxbufImpl&&) = default;
};

MonRxbuf::MonRxbuf() : m_pImpl(new MonRxbufImpl) {}
MonRxbuf::~MonRxbuf() = default;

MonRxbuf& MonRxbuf::operator=(const MonRxbuf& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

MonRxbuf& MonRxbuf::operator=(MonRxbuf&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

const char* MonRxbuf::nameImpl() const
{
    return m_pImpl->name();
}

bool MonRxbuf::refreshMsgImpl()
{
    return m_pImpl->refreshMsg();
}

qlonglong MonRxbuf::numericIdImpl() const
{
    return m_pImpl->numericId();
}

QString MonRxbuf::idAsStringImpl() const
{
    return m_pImpl->idAsString();
}

void MonRxbuf::resetImpl()
{
    m_pImpl->reset();
}

bool MonRxbuf::assignImpl(const cc_tools_qt::ToolsMessage& other)
{
    auto* castedOther = dynamic_cast<const MonRxbuf*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

bool MonRxbuf::isValidImpl() const
{
    return m_pImpl->isValid();
}

MonRxbuf::DataSeq MonRxbuf::encodeDataImpl() const
{
    return m_pImpl->encodeData();
}

bool MonRxbuf::decodeDataImpl(const DataSeq& data)
{
    return m_pImpl->decodeData(data);
}

MonRxbuf::Ptr MonRxbuf::cloneImpl() const
{
    ImplPtr impl(static_cast<MonRxbufImpl*>(m_pImpl->clone().release()));
    return Ptr(new MonRxbuf(std::move(impl)));
}

void MonRxbuf::assignProtMessageImpl(void* protMsg)
{
    m_pImpl->assignProtMessage(protMsg);
}

MonRxbuf::DataSeq MonRxbuf::encodeFramedImpl(cc_tools_qt::ToolsFrame& frame) const
{
    return m_pImpl->encodeFramed(frame);
}

MonRxbuf::FieldsList MonRxbuf::transportFieldsImpl()
{
    return m_pImpl->transportFields();
}

MonRxbuf::FieldsList MonRxbuf::payloadFieldsImpl()
{
    return m_pImpl->payloadFields();
}

MonRxbuf::MonRxbuf(ImplPtr&& impl) :
    m_pImpl(std::move(impl))
{
}

} // namespace message

} // namespace cc_ublox

} // namespace Message

} // namespace cc_tools_qt_plugin
