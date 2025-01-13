// Generated by commsdsl2tools_qt v7.0.0

#include "AidAlpData.h"

#include "cc_tools_qt/ToolsMessageBase.h"
#include "cc_tools_qt_plugin/Message/cc_ublox/Message.h"
#include "cc_ublox/message/AidAlpData.h"

namespace cc_tools_qt_plugin
{

namespace Message
{

namespace cc_ublox
{

namespace message
{

class AidAlpDataImpl : public
    cc_tools_qt::ToolsMessageBase<
        cc_tools_qt_plugin::Message::cc_ublox::Message,
        ::cc_ublox::message::AidAlpData,
        AidAlpDataImpl
    >
{
public:
    AidAlpDataImpl() = default;
    AidAlpDataImpl(const AidAlpDataImpl&) = default;
    AidAlpDataImpl(AidAlpDataImpl&&) = default;
    virtual ~AidAlpDataImpl() = default;
    AidAlpDataImpl& operator=(const AidAlpDataImpl&) = default;
    AidAlpDataImpl& operator=(AidAlpDataImpl&&) = default;
};

AidAlpData::AidAlpData() : m_pImpl(new AidAlpDataImpl) {}
AidAlpData::~AidAlpData() = default;

AidAlpData& AidAlpData::operator=(const AidAlpData& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

AidAlpData& AidAlpData::operator=(AidAlpData&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

const char* AidAlpData::nameImpl() const
{
    return m_pImpl->name();
}

bool AidAlpData::refreshMsgImpl()
{
    return m_pImpl->refreshMsg();
}

qlonglong AidAlpData::numericIdImpl() const
{
    return m_pImpl->numericId();
}

QString AidAlpData::idAsStringImpl() const
{
    return m_pImpl->idAsString();
}

void AidAlpData::resetImpl()
{
    m_pImpl->reset();
}

bool AidAlpData::assignImpl(const cc_tools_qt::ToolsMessage& other)
{
    auto* castedOther = dynamic_cast<const AidAlpData*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

bool AidAlpData::isValidImpl() const
{
    return m_pImpl->isValid();
}

AidAlpData::DataSeq AidAlpData::encodeDataImpl() const
{
    return m_pImpl->encodeData();
}

bool AidAlpData::decodeDataImpl(const DataSeq& data)
{
    return m_pImpl->decodeData(data);
}

AidAlpData::Ptr AidAlpData::cloneImpl() const
{
    ImplPtr impl(static_cast<AidAlpDataImpl*>(m_pImpl->clone().release()));
    return Ptr(new AidAlpData(std::move(impl)));
}

void AidAlpData::assignProtMessageImpl(void* protMsg)
{
    m_pImpl->assignProtMessage(protMsg);
}

AidAlpData::DataSeq AidAlpData::encodeFramedImpl(cc_tools_qt::ToolsFrame& frame) const
{
    return m_pImpl->encodeFramed(frame);
}

AidAlpData::FieldsList AidAlpData::transportFieldsImpl()
{
    return m_pImpl->transportFields();
}

AidAlpData::FieldsList AidAlpData::payloadFieldsImpl()
{
    return m_pImpl->payloadFields();
}

AidAlpData::AidAlpData(ImplPtr&& impl) :
    m_pImpl(std::move(impl))
{
}

} // namespace message

} // namespace cc_ublox

} // namespace Message

} // namespace cc_tools_qt_plugin
