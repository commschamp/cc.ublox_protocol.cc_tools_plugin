// Generated by commsdsl2tools_qt v7.0.3

#include "SecUniqid.h"

#include "cc_tools_qt/ToolsMessageBase.h"
#include "cc_tools_qt_plugin/Message/cc_ublox/Message.h"
#include "cc_ublox/message/SecUniqid.h"

namespace cc_tools_qt_plugin
{

namespace Message
{

namespace cc_ublox
{

namespace message
{

class SecUniqidImpl : public
    cc_tools_qt::ToolsMessageBase<
        cc_tools_qt_plugin::Message::cc_ublox::Message,
        ::cc_ublox::message::SecUniqid,
        SecUniqidImpl
    >
{
public:
    SecUniqidImpl() = default;
    SecUniqidImpl(const SecUniqidImpl&) = default;
    SecUniqidImpl(SecUniqidImpl&&) = default;
    virtual ~SecUniqidImpl() = default;
    SecUniqidImpl& operator=(const SecUniqidImpl&) = default;
    SecUniqidImpl& operator=(SecUniqidImpl&&) = default;
};

SecUniqid::SecUniqid() : m_pImpl(new SecUniqidImpl) {}
SecUniqid::~SecUniqid() = default;

SecUniqid& SecUniqid::operator=(const SecUniqid& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

SecUniqid& SecUniqid::operator=(SecUniqid&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

const char* SecUniqid::nameImpl() const
{
    return m_pImpl->name();
}

bool SecUniqid::refreshMsgImpl()
{
    return m_pImpl->refreshMsg();
}

qlonglong SecUniqid::numericIdImpl() const
{
    return m_pImpl->numericId();
}

QString SecUniqid::idAsStringImpl() const
{
    return m_pImpl->idAsString();
}

void SecUniqid::resetImpl()
{
    m_pImpl->reset();
}

bool SecUniqid::assignImpl(const cc_tools_qt::ToolsMessage& other)
{
    auto* castedOther = dynamic_cast<const SecUniqid*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

bool SecUniqid::isValidImpl() const
{
    return m_pImpl->isValid();
}

SecUniqid::DataSeq SecUniqid::encodeDataImpl() const
{
    return m_pImpl->encodeData();
}

bool SecUniqid::decodeDataImpl(const DataSeq& data)
{
    return m_pImpl->decodeData(data);
}

SecUniqid::Ptr SecUniqid::cloneImpl() const
{
    ImplPtr impl(static_cast<SecUniqidImpl*>(m_pImpl->clone().release()));
    return Ptr(new SecUniqid(std::move(impl)));
}

void SecUniqid::assignProtMessageImpl(void* protMsg)
{
    m_pImpl->assignProtMessage(protMsg);
}

SecUniqid::DataSeq SecUniqid::encodeFramedImpl(cc_tools_qt::ToolsFrame& frame) const
{
    return m_pImpl->encodeFramed(frame);
}

SecUniqid::FieldsList SecUniqid::transportFieldsImpl()
{
    return m_pImpl->transportFields();
}

SecUniqid::FieldsList SecUniqid::payloadFieldsImpl()
{
    return m_pImpl->payloadFields();
}

SecUniqid::SecUniqid(ImplPtr&& impl) :
    m_pImpl(std::move(impl))
{
}

} // namespace message

} // namespace cc_ublox

} // namespace Message

} // namespace cc_tools_qt_plugin
