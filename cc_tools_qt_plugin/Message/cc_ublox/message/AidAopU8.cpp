// Generated by commsdsl2tools_qt v7.0.3

#include "AidAopU8.h"

#include "cc_tools_qt/ToolsMessageBase.h"
#include "cc_tools_qt_plugin/Message/cc_ublox/Message.h"
#include "cc_ublox/message/AidAopU8.h"

namespace cc_tools_qt_plugin
{

namespace Message
{

namespace cc_ublox
{

namespace message
{

class AidAopU8Impl : public
    cc_tools_qt::ToolsMessageBase<
        cc_tools_qt_plugin::Message::cc_ublox::Message,
        ::cc_ublox::message::AidAopU8,
        AidAopU8Impl
    >
{
public:
    AidAopU8Impl() = default;
    AidAopU8Impl(const AidAopU8Impl&) = default;
    AidAopU8Impl(AidAopU8Impl&&) = default;
    virtual ~AidAopU8Impl() = default;
    AidAopU8Impl& operator=(const AidAopU8Impl&) = default;
    AidAopU8Impl& operator=(AidAopU8Impl&&) = default;
};

AidAopU8::AidAopU8() : m_pImpl(new AidAopU8Impl) {}
AidAopU8::~AidAopU8() = default;

AidAopU8& AidAopU8::operator=(const AidAopU8& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

AidAopU8& AidAopU8::operator=(AidAopU8&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

const char* AidAopU8::nameImpl() const
{
    return m_pImpl->name();
}

bool AidAopU8::refreshMsgImpl()
{
    return m_pImpl->refreshMsg();
}

qlonglong AidAopU8::numericIdImpl() const
{
    return m_pImpl->numericId();
}

QString AidAopU8::idAsStringImpl() const
{
    return m_pImpl->idAsString();
}

void AidAopU8::resetImpl()
{
    m_pImpl->reset();
}

bool AidAopU8::assignImpl(const cc_tools_qt::ToolsMessage& other)
{
    auto* castedOther = dynamic_cast<const AidAopU8*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

bool AidAopU8::isValidImpl() const
{
    return m_pImpl->isValid();
}

AidAopU8::DataSeq AidAopU8::encodeDataImpl() const
{
    return m_pImpl->encodeData();
}

bool AidAopU8::decodeDataImpl(const DataSeq& data)
{
    return m_pImpl->decodeData(data);
}

AidAopU8::Ptr AidAopU8::cloneImpl() const
{
    ImplPtr impl(static_cast<AidAopU8Impl*>(m_pImpl->clone().release()));
    return Ptr(new AidAopU8(std::move(impl)));
}

void AidAopU8::assignProtMessageImpl(void* protMsg)
{
    m_pImpl->assignProtMessage(protMsg);
}

AidAopU8::DataSeq AidAopU8::encodeFramedImpl(cc_tools_qt::ToolsFrame& frame) const
{
    return m_pImpl->encodeFramed(frame);
}

AidAopU8::FieldsList AidAopU8::transportFieldsImpl()
{
    return m_pImpl->transportFields();
}

AidAopU8::FieldsList AidAopU8::payloadFieldsImpl()
{
    return m_pImpl->payloadFields();
}

AidAopU8::AidAopU8(ImplPtr&& impl) :
    m_pImpl(std::move(impl))
{
}

} // namespace message

} // namespace cc_ublox

} // namespace Message

} // namespace cc_tools_qt_plugin
