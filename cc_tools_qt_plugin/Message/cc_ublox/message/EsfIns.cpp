// Generated by commsdsl2tools_qt v7.0.3

#include "EsfIns.h"

#include "cc_tools_qt/ToolsMessageBase.h"
#include "cc_tools_qt_plugin/Message/cc_ublox/Message.h"
#include "cc_ublox/message/EsfIns.h"

namespace cc_tools_qt_plugin
{

namespace Message
{

namespace cc_ublox
{

namespace message
{

class EsfInsImpl : public
    cc_tools_qt::ToolsMessageBase<
        cc_tools_qt_plugin::Message::cc_ublox::Message,
        ::cc_ublox::message::EsfIns,
        EsfInsImpl
    >
{
public:
    EsfInsImpl() = default;
    EsfInsImpl(const EsfInsImpl&) = default;
    EsfInsImpl(EsfInsImpl&&) = default;
    virtual ~EsfInsImpl() = default;
    EsfInsImpl& operator=(const EsfInsImpl&) = default;
    EsfInsImpl& operator=(EsfInsImpl&&) = default;
};

EsfIns::EsfIns() : m_pImpl(new EsfInsImpl) {}
EsfIns::~EsfIns() = default;

EsfIns& EsfIns::operator=(const EsfIns& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

EsfIns& EsfIns::operator=(EsfIns&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

const char* EsfIns::nameImpl() const
{
    return m_pImpl->name();
}

bool EsfIns::refreshMsgImpl()
{
    return m_pImpl->refreshMsg();
}

qlonglong EsfIns::numericIdImpl() const
{
    return m_pImpl->numericId();
}

QString EsfIns::idAsStringImpl() const
{
    return m_pImpl->idAsString();
}

void EsfIns::resetImpl()
{
    m_pImpl->reset();
}

bool EsfIns::assignImpl(const cc_tools_qt::ToolsMessage& other)
{
    auto* castedOther = dynamic_cast<const EsfIns*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

bool EsfIns::isValidImpl() const
{
    return m_pImpl->isValid();
}

EsfIns::DataSeq EsfIns::encodeDataImpl() const
{
    return m_pImpl->encodeData();
}

bool EsfIns::decodeDataImpl(const DataSeq& data)
{
    return m_pImpl->decodeData(data);
}

EsfIns::Ptr EsfIns::cloneImpl() const
{
    ImplPtr impl(static_cast<EsfInsImpl*>(m_pImpl->clone().release()));
    return Ptr(new EsfIns(std::move(impl)));
}

void EsfIns::assignProtMessageImpl(void* protMsg)
{
    m_pImpl->assignProtMessage(protMsg);
}

EsfIns::DataSeq EsfIns::encodeFramedImpl(cc_tools_qt::ToolsFrame& frame) const
{
    return m_pImpl->encodeFramed(frame);
}

EsfIns::FieldsList EsfIns::transportFieldsImpl()
{
    return m_pImpl->transportFields();
}

EsfIns::FieldsList EsfIns::payloadFieldsImpl()
{
    return m_pImpl->payloadFields();
}

EsfIns::EsfIns(ImplPtr&& impl) :
    m_pImpl(std::move(impl))
{
}

} // namespace message

} // namespace cc_ublox

} // namespace Message

} // namespace cc_tools_qt_plugin
