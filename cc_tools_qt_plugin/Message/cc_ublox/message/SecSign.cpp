// Generated by commsdsl2tools_qt v7.0.2

#include "SecSign.h"

#include "cc_tools_qt/ToolsMessageBase.h"
#include "cc_tools_qt_plugin/Message/cc_ublox/Message.h"
#include "cc_ublox/message/SecSign.h"

namespace cc_tools_qt_plugin
{

namespace Message
{

namespace cc_ublox
{

namespace message
{

class SecSignImpl : public
    cc_tools_qt::ToolsMessageBase<
        cc_tools_qt_plugin::Message::cc_ublox::Message,
        ::cc_ublox::message::SecSign,
        SecSignImpl
    >
{
public:
    SecSignImpl() = default;
    SecSignImpl(const SecSignImpl&) = default;
    SecSignImpl(SecSignImpl&&) = default;
    virtual ~SecSignImpl() = default;
    SecSignImpl& operator=(const SecSignImpl&) = default;
    SecSignImpl& operator=(SecSignImpl&&) = default;
};

SecSign::SecSign() : m_pImpl(new SecSignImpl) {}
SecSign::~SecSign() = default;

SecSign& SecSign::operator=(const SecSign& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

SecSign& SecSign::operator=(SecSign&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

const char* SecSign::nameImpl() const
{
    return m_pImpl->name();
}

bool SecSign::refreshMsgImpl()
{
    return m_pImpl->refreshMsg();
}

qlonglong SecSign::numericIdImpl() const
{
    return m_pImpl->numericId();
}

QString SecSign::idAsStringImpl() const
{
    return m_pImpl->idAsString();
}

void SecSign::resetImpl()
{
    m_pImpl->reset();
}

bool SecSign::assignImpl(const cc_tools_qt::ToolsMessage& other)
{
    auto* castedOther = dynamic_cast<const SecSign*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

bool SecSign::isValidImpl() const
{
    return m_pImpl->isValid();
}

SecSign::DataSeq SecSign::encodeDataImpl() const
{
    return m_pImpl->encodeData();
}

bool SecSign::decodeDataImpl(const DataSeq& data)
{
    return m_pImpl->decodeData(data);
}

SecSign::Ptr SecSign::cloneImpl() const
{
    ImplPtr impl(static_cast<SecSignImpl*>(m_pImpl->clone().release()));
    return Ptr(new SecSign(std::move(impl)));
}

void SecSign::assignProtMessageImpl(void* protMsg)
{
    m_pImpl->assignProtMessage(protMsg);
}

SecSign::DataSeq SecSign::encodeFramedImpl(cc_tools_qt::ToolsFrame& frame) const
{
    return m_pImpl->encodeFramed(frame);
}

SecSign::FieldsList SecSign::transportFieldsImpl()
{
    return m_pImpl->transportFields();
}

SecSign::FieldsList SecSign::payloadFieldsImpl()
{
    return m_pImpl->payloadFields();
}

SecSign::SecSign(ImplPtr&& impl) :
    m_pImpl(std::move(impl))
{
}

} // namespace message

} // namespace cc_ublox

} // namespace Message

} // namespace cc_tools_qt_plugin
