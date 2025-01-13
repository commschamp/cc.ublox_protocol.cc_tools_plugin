// Generated by commsdsl2tools_qt v7.0.0

#include "MonCommsPoll.h"

#include "cc_tools_qt/ToolsMessageBase.h"
#include "cc_tools_qt_plugin/Message/cc_ublox/Message.h"
#include "cc_ublox/message/MonCommsPoll.h"

namespace cc_tools_qt_plugin
{

namespace Message
{

namespace cc_ublox
{

namespace message
{

class MonCommsPollImpl : public
    cc_tools_qt::ToolsMessageBase<
        cc_tools_qt_plugin::Message::cc_ublox::Message,
        ::cc_ublox::message::MonCommsPoll,
        MonCommsPollImpl
    >
{
public:
    MonCommsPollImpl() = default;
    MonCommsPollImpl(const MonCommsPollImpl&) = default;
    MonCommsPollImpl(MonCommsPollImpl&&) = default;
    virtual ~MonCommsPollImpl() = default;
    MonCommsPollImpl& operator=(const MonCommsPollImpl&) = default;
    MonCommsPollImpl& operator=(MonCommsPollImpl&&) = default;
};

MonCommsPoll::MonCommsPoll() : m_pImpl(new MonCommsPollImpl) {}
MonCommsPoll::~MonCommsPoll() = default;

MonCommsPoll& MonCommsPoll::operator=(const MonCommsPoll& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

MonCommsPoll& MonCommsPoll::operator=(MonCommsPoll&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

const char* MonCommsPoll::nameImpl() const
{
    return m_pImpl->name();
}

bool MonCommsPoll::refreshMsgImpl()
{
    return m_pImpl->refreshMsg();
}

qlonglong MonCommsPoll::numericIdImpl() const
{
    return m_pImpl->numericId();
}

QString MonCommsPoll::idAsStringImpl() const
{
    return m_pImpl->idAsString();
}

void MonCommsPoll::resetImpl()
{
    m_pImpl->reset();
}

bool MonCommsPoll::assignImpl(const cc_tools_qt::ToolsMessage& other)
{
    auto* castedOther = dynamic_cast<const MonCommsPoll*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

bool MonCommsPoll::isValidImpl() const
{
    return m_pImpl->isValid();
}

MonCommsPoll::DataSeq MonCommsPoll::encodeDataImpl() const
{
    return m_pImpl->encodeData();
}

bool MonCommsPoll::decodeDataImpl(const DataSeq& data)
{
    return m_pImpl->decodeData(data);
}

MonCommsPoll::Ptr MonCommsPoll::cloneImpl() const
{
    ImplPtr impl(static_cast<MonCommsPollImpl*>(m_pImpl->clone().release()));
    return Ptr(new MonCommsPoll(std::move(impl)));
}

void MonCommsPoll::assignProtMessageImpl(void* protMsg)
{
    m_pImpl->assignProtMessage(protMsg);
}

MonCommsPoll::DataSeq MonCommsPoll::encodeFramedImpl(cc_tools_qt::ToolsFrame& frame) const
{
    return m_pImpl->encodeFramed(frame);
}

MonCommsPoll::FieldsList MonCommsPoll::transportFieldsImpl()
{
    return m_pImpl->transportFields();
}

MonCommsPoll::FieldsList MonCommsPoll::payloadFieldsImpl()
{
    return m_pImpl->payloadFields();
}

MonCommsPoll::MonCommsPoll(ImplPtr&& impl) :
    m_pImpl(std::move(impl))
{
}

} // namespace message

} // namespace cc_ublox

} // namespace Message

} // namespace cc_tools_qt_plugin
