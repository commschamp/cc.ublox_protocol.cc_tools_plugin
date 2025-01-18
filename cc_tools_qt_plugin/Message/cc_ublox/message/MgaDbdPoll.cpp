// Generated by commsdsl2tools_qt v7.0.2

#include "MgaDbdPoll.h"

#include "cc_tools_qt/ToolsMessageBase.h"
#include "cc_tools_qt_plugin/Message/cc_ublox/Message.h"
#include "cc_ublox/message/MgaDbdPoll.h"

namespace cc_tools_qt_plugin
{

namespace Message
{

namespace cc_ublox
{

namespace message
{

class MgaDbdPollImpl : public
    cc_tools_qt::ToolsMessageBase<
        cc_tools_qt_plugin::Message::cc_ublox::Message,
        ::cc_ublox::message::MgaDbdPoll,
        MgaDbdPollImpl
    >
{
public:
    MgaDbdPollImpl() = default;
    MgaDbdPollImpl(const MgaDbdPollImpl&) = default;
    MgaDbdPollImpl(MgaDbdPollImpl&&) = default;
    virtual ~MgaDbdPollImpl() = default;
    MgaDbdPollImpl& operator=(const MgaDbdPollImpl&) = default;
    MgaDbdPollImpl& operator=(MgaDbdPollImpl&&) = default;
};

MgaDbdPoll::MgaDbdPoll() : m_pImpl(new MgaDbdPollImpl) {}
MgaDbdPoll::~MgaDbdPoll() = default;

MgaDbdPoll& MgaDbdPoll::operator=(const MgaDbdPoll& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

MgaDbdPoll& MgaDbdPoll::operator=(MgaDbdPoll&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

const char* MgaDbdPoll::nameImpl() const
{
    return m_pImpl->name();
}

bool MgaDbdPoll::refreshMsgImpl()
{
    return m_pImpl->refreshMsg();
}

qlonglong MgaDbdPoll::numericIdImpl() const
{
    return m_pImpl->numericId();
}

QString MgaDbdPoll::idAsStringImpl() const
{
    return m_pImpl->idAsString();
}

void MgaDbdPoll::resetImpl()
{
    m_pImpl->reset();
}

bool MgaDbdPoll::assignImpl(const cc_tools_qt::ToolsMessage& other)
{
    auto* castedOther = dynamic_cast<const MgaDbdPoll*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

bool MgaDbdPoll::isValidImpl() const
{
    return m_pImpl->isValid();
}

MgaDbdPoll::DataSeq MgaDbdPoll::encodeDataImpl() const
{
    return m_pImpl->encodeData();
}

bool MgaDbdPoll::decodeDataImpl(const DataSeq& data)
{
    return m_pImpl->decodeData(data);
}

MgaDbdPoll::Ptr MgaDbdPoll::cloneImpl() const
{
    ImplPtr impl(static_cast<MgaDbdPollImpl*>(m_pImpl->clone().release()));
    return Ptr(new MgaDbdPoll(std::move(impl)));
}

void MgaDbdPoll::assignProtMessageImpl(void* protMsg)
{
    m_pImpl->assignProtMessage(protMsg);
}

MgaDbdPoll::DataSeq MgaDbdPoll::encodeFramedImpl(cc_tools_qt::ToolsFrame& frame) const
{
    return m_pImpl->encodeFramed(frame);
}

MgaDbdPoll::FieldsList MgaDbdPoll::transportFieldsImpl()
{
    return m_pImpl->transportFields();
}

MgaDbdPoll::FieldsList MgaDbdPoll::payloadFieldsImpl()
{
    return m_pImpl->payloadFields();
}

MgaDbdPoll::MgaDbdPoll(ImplPtr&& impl) :
    m_pImpl(std::move(impl))
{
}

} // namespace message

} // namespace cc_ublox

} // namespace Message

} // namespace cc_tools_qt_plugin
