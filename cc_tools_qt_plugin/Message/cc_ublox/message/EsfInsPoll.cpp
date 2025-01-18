// Generated by commsdsl2tools_qt v7.0.2

#include "EsfInsPoll.h"

#include "cc_tools_qt/ToolsMessageBase.h"
#include "cc_tools_qt_plugin/Message/cc_ublox/Message.h"
#include "cc_ublox/message/EsfInsPoll.h"

namespace cc_tools_qt_plugin
{

namespace Message
{

namespace cc_ublox
{

namespace message
{

class EsfInsPollImpl : public
    cc_tools_qt::ToolsMessageBase<
        cc_tools_qt_plugin::Message::cc_ublox::Message,
        ::cc_ublox::message::EsfInsPoll,
        EsfInsPollImpl
    >
{
public:
    EsfInsPollImpl() = default;
    EsfInsPollImpl(const EsfInsPollImpl&) = default;
    EsfInsPollImpl(EsfInsPollImpl&&) = default;
    virtual ~EsfInsPollImpl() = default;
    EsfInsPollImpl& operator=(const EsfInsPollImpl&) = default;
    EsfInsPollImpl& operator=(EsfInsPollImpl&&) = default;
};

EsfInsPoll::EsfInsPoll() : m_pImpl(new EsfInsPollImpl) {}
EsfInsPoll::~EsfInsPoll() = default;

EsfInsPoll& EsfInsPoll::operator=(const EsfInsPoll& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

EsfInsPoll& EsfInsPoll::operator=(EsfInsPoll&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

const char* EsfInsPoll::nameImpl() const
{
    return m_pImpl->name();
}

bool EsfInsPoll::refreshMsgImpl()
{
    return m_pImpl->refreshMsg();
}

qlonglong EsfInsPoll::numericIdImpl() const
{
    return m_pImpl->numericId();
}

QString EsfInsPoll::idAsStringImpl() const
{
    return m_pImpl->idAsString();
}

void EsfInsPoll::resetImpl()
{
    m_pImpl->reset();
}

bool EsfInsPoll::assignImpl(const cc_tools_qt::ToolsMessage& other)
{
    auto* castedOther = dynamic_cast<const EsfInsPoll*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

bool EsfInsPoll::isValidImpl() const
{
    return m_pImpl->isValid();
}

EsfInsPoll::DataSeq EsfInsPoll::encodeDataImpl() const
{
    return m_pImpl->encodeData();
}

bool EsfInsPoll::decodeDataImpl(const DataSeq& data)
{
    return m_pImpl->decodeData(data);
}

EsfInsPoll::Ptr EsfInsPoll::cloneImpl() const
{
    ImplPtr impl(static_cast<EsfInsPollImpl*>(m_pImpl->clone().release()));
    return Ptr(new EsfInsPoll(std::move(impl)));
}

void EsfInsPoll::assignProtMessageImpl(void* protMsg)
{
    m_pImpl->assignProtMessage(protMsg);
}

EsfInsPoll::DataSeq EsfInsPoll::encodeFramedImpl(cc_tools_qt::ToolsFrame& frame) const
{
    return m_pImpl->encodeFramed(frame);
}

EsfInsPoll::FieldsList EsfInsPoll::transportFieldsImpl()
{
    return m_pImpl->transportFields();
}

EsfInsPoll::FieldsList EsfInsPoll::payloadFieldsImpl()
{
    return m_pImpl->payloadFields();
}

EsfInsPoll::EsfInsPoll(ImplPtr&& impl) :
    m_pImpl(std::move(impl))
{
}

} // namespace message

} // namespace cc_ublox

} // namespace Message

} // namespace cc_tools_qt_plugin
