// Generated by commsdsl2tools_qt v7.0.0

#include "EsfMeas.h"

#include "cc_tools_qt/ToolsMessageBase.h"
#include "cc_tools_qt_plugin/Message/cc_ublox/Message.h"
#include "cc_ublox/message/EsfMeas.h"

namespace cc_tools_qt_plugin
{

namespace Message
{

namespace cc_ublox
{

namespace message
{

class EsfMeasImpl : public
    cc_tools_qt::ToolsMessageBase<
        cc_tools_qt_plugin::Message::cc_ublox::Message,
        ::cc_ublox::message::EsfMeas,
        EsfMeasImpl
    >
{
public:
    EsfMeasImpl() = default;
    EsfMeasImpl(const EsfMeasImpl&) = default;
    EsfMeasImpl(EsfMeasImpl&&) = default;
    virtual ~EsfMeasImpl() = default;
    EsfMeasImpl& operator=(const EsfMeasImpl&) = default;
    EsfMeasImpl& operator=(EsfMeasImpl&&) = default;
};

EsfMeas::EsfMeas() : m_pImpl(new EsfMeasImpl) {}
EsfMeas::~EsfMeas() = default;

EsfMeas& EsfMeas::operator=(const EsfMeas& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

EsfMeas& EsfMeas::operator=(EsfMeas&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

const char* EsfMeas::nameImpl() const
{
    return m_pImpl->name();
}

bool EsfMeas::refreshMsgImpl()
{
    return m_pImpl->refreshMsg();
}

qlonglong EsfMeas::numericIdImpl() const
{
    return m_pImpl->numericId();
}

QString EsfMeas::idAsStringImpl() const
{
    return m_pImpl->idAsString();
}

void EsfMeas::resetImpl()
{
    m_pImpl->reset();
}

bool EsfMeas::assignImpl(const cc_tools_qt::ToolsMessage& other)
{
    auto* castedOther = dynamic_cast<const EsfMeas*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

bool EsfMeas::isValidImpl() const
{
    return m_pImpl->isValid();
}

EsfMeas::DataSeq EsfMeas::encodeDataImpl() const
{
    return m_pImpl->encodeData();
}

bool EsfMeas::decodeDataImpl(const DataSeq& data)
{
    return m_pImpl->decodeData(data);
}

EsfMeas::Ptr EsfMeas::cloneImpl() const
{
    ImplPtr impl(static_cast<EsfMeasImpl*>(m_pImpl->clone().release()));
    return Ptr(new EsfMeas(std::move(impl)));
}

void EsfMeas::assignProtMessageImpl(void* protMsg)
{
    m_pImpl->assignProtMessage(protMsg);
}

EsfMeas::DataSeq EsfMeas::encodeFramedImpl(cc_tools_qt::ToolsFrame& frame) const
{
    return m_pImpl->encodeFramed(frame);
}

EsfMeas::FieldsList EsfMeas::transportFieldsImpl()
{
    return m_pImpl->transportFields();
}

EsfMeas::FieldsList EsfMeas::payloadFieldsImpl()
{
    return m_pImpl->payloadFields();
}

EsfMeas::EsfMeas(ImplPtr&& impl) :
    m_pImpl(std::move(impl))
{
}

} // namespace message

} // namespace cc_ublox

} // namespace Message

} // namespace cc_tools_qt_plugin
