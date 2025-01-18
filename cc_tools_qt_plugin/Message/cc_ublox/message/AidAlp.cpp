// Generated by commsdsl2tools_qt v7.0.2

#include "AidAlp.h"

#include "cc_tools_qt/ToolsMessageBase.h"
#include "cc_tools_qt_plugin/Message/cc_ublox/Message.h"
#include "cc_ublox/message/AidAlp.h"

namespace cc_tools_qt_plugin
{

namespace Message
{

namespace cc_ublox
{

namespace message
{

class AidAlpImpl : public
    cc_tools_qt::ToolsMessageBase<
        cc_tools_qt_plugin::Message::cc_ublox::Message,
        ::cc_ublox::message::AidAlp,
        AidAlpImpl
    >
{
public:
    AidAlpImpl() = default;
    AidAlpImpl(const AidAlpImpl&) = default;
    AidAlpImpl(AidAlpImpl&&) = default;
    virtual ~AidAlpImpl() = default;
    AidAlpImpl& operator=(const AidAlpImpl&) = default;
    AidAlpImpl& operator=(AidAlpImpl&&) = default;
};

AidAlp::AidAlp() : m_pImpl(new AidAlpImpl) {}
AidAlp::~AidAlp() = default;

AidAlp& AidAlp::operator=(const AidAlp& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

AidAlp& AidAlp::operator=(AidAlp&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

const char* AidAlp::nameImpl() const
{
    return m_pImpl->name();
}

bool AidAlp::refreshMsgImpl()
{
    return m_pImpl->refreshMsg();
}

qlonglong AidAlp::numericIdImpl() const
{
    return m_pImpl->numericId();
}

QString AidAlp::idAsStringImpl() const
{
    return m_pImpl->idAsString();
}

void AidAlp::resetImpl()
{
    m_pImpl->reset();
}

bool AidAlp::assignImpl(const cc_tools_qt::ToolsMessage& other)
{
    auto* castedOther = dynamic_cast<const AidAlp*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

bool AidAlp::isValidImpl() const
{
    return m_pImpl->isValid();
}

AidAlp::DataSeq AidAlp::encodeDataImpl() const
{
    return m_pImpl->encodeData();
}

bool AidAlp::decodeDataImpl(const DataSeq& data)
{
    return m_pImpl->decodeData(data);
}

AidAlp::Ptr AidAlp::cloneImpl() const
{
    ImplPtr impl(static_cast<AidAlpImpl*>(m_pImpl->clone().release()));
    return Ptr(new AidAlp(std::move(impl)));
}

void AidAlp::assignProtMessageImpl(void* protMsg)
{
    m_pImpl->assignProtMessage(protMsg);
}

AidAlp::DataSeq AidAlp::encodeFramedImpl(cc_tools_qt::ToolsFrame& frame) const
{
    return m_pImpl->encodeFramed(frame);
}

AidAlp::FieldsList AidAlp::transportFieldsImpl()
{
    return m_pImpl->transportFields();
}

AidAlp::FieldsList AidAlp::payloadFieldsImpl()
{
    return m_pImpl->payloadFields();
}

AidAlp::AidAlp(ImplPtr&& impl) :
    m_pImpl(std::move(impl))
{
}

} // namespace message

} // namespace cc_ublox

} // namespace Message

} // namespace cc_tools_qt_plugin
