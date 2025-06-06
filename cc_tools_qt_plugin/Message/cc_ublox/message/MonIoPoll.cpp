// Generated by commsdsl2tools_qt v7.1.0

#include "MonIoPoll.h"

#include "cc_tools_qt/ToolsMessageBase.h"
#include "cc_tools_qt_plugin/Message/cc_ublox/Message.h"
#include "cc_ublox/message/MonIoPoll.h"

namespace cc_tools_qt_plugin
{

namespace Message
{

namespace cc_ublox
{

namespace message
{

class MonIoPollImpl : public
    cc_tools_qt::ToolsMessageBase<
        cc_tools_qt_plugin::Message::cc_ublox::Message,
        ::cc_ublox::message::MonIoPoll,
        MonIoPollImpl
    >
{
public:
    MonIoPollImpl() = default;
    MonIoPollImpl(const MonIoPollImpl&) = default;
    MonIoPollImpl(MonIoPollImpl&&) = default;
    virtual ~MonIoPollImpl() = default;
    MonIoPollImpl& operator=(const MonIoPollImpl&) = default;
    MonIoPollImpl& operator=(MonIoPollImpl&&) = default;
};

MonIoPoll::MonIoPoll() : m_pImpl(new MonIoPollImpl) {}
MonIoPoll::~MonIoPoll() = default;

MonIoPoll& MonIoPoll::operator=(const MonIoPoll& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

MonIoPoll& MonIoPoll::operator=(MonIoPoll&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

const char* MonIoPoll::nameImpl() const
{
    return m_pImpl->name();
}

bool MonIoPoll::refreshMsgImpl()
{
    return m_pImpl->refreshMsg();
}

qlonglong MonIoPoll::numericIdImpl() const
{
    return m_pImpl->numericId();
}

QString MonIoPoll::idAsStringImpl() const
{
    return m_pImpl->idAsString();
}

void MonIoPoll::resetImpl()
{
    m_pImpl->reset();
}

bool MonIoPoll::assignImpl(const cc_tools_qt::ToolsMessage& other)
{
    auto* castedOther = dynamic_cast<const MonIoPoll*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

bool MonIoPoll::isValidImpl() const
{
    return m_pImpl->isValid();
}

MonIoPoll::DataSeq MonIoPoll::encodeDataImpl() const
{
    return m_pImpl->encodeData();
}

bool MonIoPoll::decodeDataImpl(const DataSeq& data)
{
    return m_pImpl->decodeData(data);
}

MonIoPoll::Ptr MonIoPoll::cloneImpl() const
{
    ImplPtr impl(static_cast<MonIoPollImpl*>(m_pImpl->clone().release()));
    return Ptr(new MonIoPoll(std::move(impl)));
}

void MonIoPoll::assignProtMessageImpl(void* protMsg)
{
    m_pImpl->assignProtMessage(protMsg);
}

MonIoPoll::DataSeq MonIoPoll::encodeFramedImpl(cc_tools_qt::ToolsFrame& frame) const
{
    return m_pImpl->encodeFramed(frame);
}

MonIoPoll::FieldsList MonIoPoll::transportFieldsImpl()
{
    return m_pImpl->transportFields();
}

MonIoPoll::FieldsList MonIoPoll::payloadFieldsImpl()
{
    return m_pImpl->payloadFields();
}

MonIoPoll::MonIoPoll(ImplPtr&& impl) :
    m_pImpl(std::move(impl))
{
}

} // namespace message

} // namespace cc_ublox

} // namespace Message

} // namespace cc_tools_qt_plugin
