// Generated by commsdsl2tools_qt v7.0.2

#include "AidEphPollSv.h"

#include "cc_tools_qt/ToolsMessageBase.h"
#include "cc_tools_qt_plugin/Message/cc_ublox/Message.h"
#include "cc_ublox/message/AidEphPollSv.h"

namespace cc_tools_qt_plugin
{

namespace Message
{

namespace cc_ublox
{

namespace message
{

class AidEphPollSvImpl : public
    cc_tools_qt::ToolsMessageBase<
        cc_tools_qt_plugin::Message::cc_ublox::Message,
        ::cc_ublox::message::AidEphPollSv,
        AidEphPollSvImpl
    >
{
public:
    AidEphPollSvImpl() = default;
    AidEphPollSvImpl(const AidEphPollSvImpl&) = default;
    AidEphPollSvImpl(AidEphPollSvImpl&&) = default;
    virtual ~AidEphPollSvImpl() = default;
    AidEphPollSvImpl& operator=(const AidEphPollSvImpl&) = default;
    AidEphPollSvImpl& operator=(AidEphPollSvImpl&&) = default;
};

AidEphPollSv::AidEphPollSv() : m_pImpl(new AidEphPollSvImpl) {}
AidEphPollSv::~AidEphPollSv() = default;

AidEphPollSv& AidEphPollSv::operator=(const AidEphPollSv& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

AidEphPollSv& AidEphPollSv::operator=(AidEphPollSv&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

const char* AidEphPollSv::nameImpl() const
{
    return m_pImpl->name();
}

bool AidEphPollSv::refreshMsgImpl()
{
    return m_pImpl->refreshMsg();
}

qlonglong AidEphPollSv::numericIdImpl() const
{
    return m_pImpl->numericId();
}

QString AidEphPollSv::idAsStringImpl() const
{
    return m_pImpl->idAsString();
}

void AidEphPollSv::resetImpl()
{
    m_pImpl->reset();
}

bool AidEphPollSv::assignImpl(const cc_tools_qt::ToolsMessage& other)
{
    auto* castedOther = dynamic_cast<const AidEphPollSv*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

bool AidEphPollSv::isValidImpl() const
{
    return m_pImpl->isValid();
}

AidEphPollSv::DataSeq AidEphPollSv::encodeDataImpl() const
{
    return m_pImpl->encodeData();
}

bool AidEphPollSv::decodeDataImpl(const DataSeq& data)
{
    return m_pImpl->decodeData(data);
}

AidEphPollSv::Ptr AidEphPollSv::cloneImpl() const
{
    ImplPtr impl(static_cast<AidEphPollSvImpl*>(m_pImpl->clone().release()));
    return Ptr(new AidEphPollSv(std::move(impl)));
}

void AidEphPollSv::assignProtMessageImpl(void* protMsg)
{
    m_pImpl->assignProtMessage(protMsg);
}

AidEphPollSv::DataSeq AidEphPollSv::encodeFramedImpl(cc_tools_qt::ToolsFrame& frame) const
{
    return m_pImpl->encodeFramed(frame);
}

AidEphPollSv::FieldsList AidEphPollSv::transportFieldsImpl()
{
    return m_pImpl->transportFields();
}

AidEphPollSv::FieldsList AidEphPollSv::payloadFieldsImpl()
{
    return m_pImpl->payloadFields();
}

AidEphPollSv::AidEphPollSv(ImplPtr&& impl) :
    m_pImpl(std::move(impl))
{
}

} // namespace message

} // namespace cc_ublox

} // namespace Message

} // namespace cc_tools_qt_plugin
