// Generated by commsdsl2tools_qt v7.0.3

#include "MgaBdsHealth.h"

#include "cc_tools_qt/ToolsMessageBase.h"
#include "cc_tools_qt_plugin/Message/cc_ublox/Message.h"
#include "cc_ublox/message/MgaBdsHealth.h"

namespace cc_tools_qt_plugin
{

namespace Message
{

namespace cc_ublox
{

namespace message
{

class MgaBdsHealthImpl : public
    cc_tools_qt::ToolsMessageBase<
        cc_tools_qt_plugin::Message::cc_ublox::Message,
        ::cc_ublox::message::MgaBdsHealth,
        MgaBdsHealthImpl
    >
{
public:
    MgaBdsHealthImpl() = default;
    MgaBdsHealthImpl(const MgaBdsHealthImpl&) = default;
    MgaBdsHealthImpl(MgaBdsHealthImpl&&) = default;
    virtual ~MgaBdsHealthImpl() = default;
    MgaBdsHealthImpl& operator=(const MgaBdsHealthImpl&) = default;
    MgaBdsHealthImpl& operator=(MgaBdsHealthImpl&&) = default;
};

MgaBdsHealth::MgaBdsHealth() : m_pImpl(new MgaBdsHealthImpl) {}
MgaBdsHealth::~MgaBdsHealth() = default;

MgaBdsHealth& MgaBdsHealth::operator=(const MgaBdsHealth& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

MgaBdsHealth& MgaBdsHealth::operator=(MgaBdsHealth&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

const char* MgaBdsHealth::nameImpl() const
{
    return m_pImpl->name();
}

bool MgaBdsHealth::refreshMsgImpl()
{
    return m_pImpl->refreshMsg();
}

qlonglong MgaBdsHealth::numericIdImpl() const
{
    return m_pImpl->numericId();
}

QString MgaBdsHealth::idAsStringImpl() const
{
    return m_pImpl->idAsString();
}

void MgaBdsHealth::resetImpl()
{
    m_pImpl->reset();
}

bool MgaBdsHealth::assignImpl(const cc_tools_qt::ToolsMessage& other)
{
    auto* castedOther = dynamic_cast<const MgaBdsHealth*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

bool MgaBdsHealth::isValidImpl() const
{
    return m_pImpl->isValid();
}

MgaBdsHealth::DataSeq MgaBdsHealth::encodeDataImpl() const
{
    return m_pImpl->encodeData();
}

bool MgaBdsHealth::decodeDataImpl(const DataSeq& data)
{
    return m_pImpl->decodeData(data);
}

MgaBdsHealth::Ptr MgaBdsHealth::cloneImpl() const
{
    ImplPtr impl(static_cast<MgaBdsHealthImpl*>(m_pImpl->clone().release()));
    return Ptr(new MgaBdsHealth(std::move(impl)));
}

void MgaBdsHealth::assignProtMessageImpl(void* protMsg)
{
    m_pImpl->assignProtMessage(protMsg);
}

MgaBdsHealth::DataSeq MgaBdsHealth::encodeFramedImpl(cc_tools_qt::ToolsFrame& frame) const
{
    return m_pImpl->encodeFramed(frame);
}

MgaBdsHealth::FieldsList MgaBdsHealth::transportFieldsImpl()
{
    return m_pImpl->transportFields();
}

MgaBdsHealth::FieldsList MgaBdsHealth::payloadFieldsImpl()
{
    return m_pImpl->payloadFields();
}

MgaBdsHealth::MgaBdsHealth(ImplPtr&& impl) :
    m_pImpl(std::move(impl))
{
}

} // namespace message

} // namespace cc_ublox

} // namespace Message

} // namespace cc_tools_qt_plugin
