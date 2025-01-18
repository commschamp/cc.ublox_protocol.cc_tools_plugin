// Generated by commsdsl2tools_qt v7.0.2

#include "EsfRaw.h"

#include "cc_tools_qt/ToolsMessageBase.h"
#include "cc_tools_qt_plugin/Message/cc_ublox/Message.h"
#include "cc_ublox/message/EsfRaw.h"

namespace cc_tools_qt_plugin
{

namespace Message
{

namespace cc_ublox
{

namespace message
{

class EsfRawImpl : public
    cc_tools_qt::ToolsMessageBase<
        cc_tools_qt_plugin::Message::cc_ublox::Message,
        ::cc_ublox::message::EsfRaw,
        EsfRawImpl
    >
{
public:
    EsfRawImpl() = default;
    EsfRawImpl(const EsfRawImpl&) = default;
    EsfRawImpl(EsfRawImpl&&) = default;
    virtual ~EsfRawImpl() = default;
    EsfRawImpl& operator=(const EsfRawImpl&) = default;
    EsfRawImpl& operator=(EsfRawImpl&&) = default;
};

EsfRaw::EsfRaw() : m_pImpl(new EsfRawImpl) {}
EsfRaw::~EsfRaw() = default;

EsfRaw& EsfRaw::operator=(const EsfRaw& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

EsfRaw& EsfRaw::operator=(EsfRaw&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

const char* EsfRaw::nameImpl() const
{
    return m_pImpl->name();
}

bool EsfRaw::refreshMsgImpl()
{
    return m_pImpl->refreshMsg();
}

qlonglong EsfRaw::numericIdImpl() const
{
    return m_pImpl->numericId();
}

QString EsfRaw::idAsStringImpl() const
{
    return m_pImpl->idAsString();
}

void EsfRaw::resetImpl()
{
    m_pImpl->reset();
}

bool EsfRaw::assignImpl(const cc_tools_qt::ToolsMessage& other)
{
    auto* castedOther = dynamic_cast<const EsfRaw*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

bool EsfRaw::isValidImpl() const
{
    return m_pImpl->isValid();
}

EsfRaw::DataSeq EsfRaw::encodeDataImpl() const
{
    return m_pImpl->encodeData();
}

bool EsfRaw::decodeDataImpl(const DataSeq& data)
{
    return m_pImpl->decodeData(data);
}

EsfRaw::Ptr EsfRaw::cloneImpl() const
{
    ImplPtr impl(static_cast<EsfRawImpl*>(m_pImpl->clone().release()));
    return Ptr(new EsfRaw(std::move(impl)));
}

void EsfRaw::assignProtMessageImpl(void* protMsg)
{
    m_pImpl->assignProtMessage(protMsg);
}

EsfRaw::DataSeq EsfRaw::encodeFramedImpl(cc_tools_qt::ToolsFrame& frame) const
{
    return m_pImpl->encodeFramed(frame);
}

EsfRaw::FieldsList EsfRaw::transportFieldsImpl()
{
    return m_pImpl->transportFields();
}

EsfRaw::FieldsList EsfRaw::payloadFieldsImpl()
{
    return m_pImpl->payloadFields();
}

EsfRaw::EsfRaw(ImplPtr&& impl) :
    m_pImpl(std::move(impl))
{
}

} // namespace message

} // namespace cc_ublox

} // namespace Message

} // namespace cc_tools_qt_plugin
