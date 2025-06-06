// Generated by commsdsl2tools_qt v7.1.0

#include "MgaBdsIono.h"

#include "cc_tools_qt/ToolsMessageBase.h"
#include "cc_tools_qt_plugin/Message/cc_ublox/Message.h"
#include "cc_ublox/message/MgaBdsIono.h"

namespace cc_tools_qt_plugin
{

namespace Message
{

namespace cc_ublox
{

namespace message
{

class MgaBdsIonoImpl : public
    cc_tools_qt::ToolsMessageBase<
        cc_tools_qt_plugin::Message::cc_ublox::Message,
        ::cc_ublox::message::MgaBdsIono,
        MgaBdsIonoImpl
    >
{
public:
    MgaBdsIonoImpl() = default;
    MgaBdsIonoImpl(const MgaBdsIonoImpl&) = default;
    MgaBdsIonoImpl(MgaBdsIonoImpl&&) = default;
    virtual ~MgaBdsIonoImpl() = default;
    MgaBdsIonoImpl& operator=(const MgaBdsIonoImpl&) = default;
    MgaBdsIonoImpl& operator=(MgaBdsIonoImpl&&) = default;
};

MgaBdsIono::MgaBdsIono() : m_pImpl(new MgaBdsIonoImpl) {}
MgaBdsIono::~MgaBdsIono() = default;

MgaBdsIono& MgaBdsIono::operator=(const MgaBdsIono& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

MgaBdsIono& MgaBdsIono::operator=(MgaBdsIono&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

const char* MgaBdsIono::nameImpl() const
{
    return m_pImpl->name();
}

bool MgaBdsIono::refreshMsgImpl()
{
    return m_pImpl->refreshMsg();
}

qlonglong MgaBdsIono::numericIdImpl() const
{
    return m_pImpl->numericId();
}

QString MgaBdsIono::idAsStringImpl() const
{
    return m_pImpl->idAsString();
}

void MgaBdsIono::resetImpl()
{
    m_pImpl->reset();
}

bool MgaBdsIono::assignImpl(const cc_tools_qt::ToolsMessage& other)
{
    auto* castedOther = dynamic_cast<const MgaBdsIono*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

bool MgaBdsIono::isValidImpl() const
{
    return m_pImpl->isValid();
}

MgaBdsIono::DataSeq MgaBdsIono::encodeDataImpl() const
{
    return m_pImpl->encodeData();
}

bool MgaBdsIono::decodeDataImpl(const DataSeq& data)
{
    return m_pImpl->decodeData(data);
}

MgaBdsIono::Ptr MgaBdsIono::cloneImpl() const
{
    ImplPtr impl(static_cast<MgaBdsIonoImpl*>(m_pImpl->clone().release()));
    return Ptr(new MgaBdsIono(std::move(impl)));
}

void MgaBdsIono::assignProtMessageImpl(void* protMsg)
{
    m_pImpl->assignProtMessage(protMsg);
}

MgaBdsIono::DataSeq MgaBdsIono::encodeFramedImpl(cc_tools_qt::ToolsFrame& frame) const
{
    return m_pImpl->encodeFramed(frame);
}

MgaBdsIono::FieldsList MgaBdsIono::transportFieldsImpl()
{
    return m_pImpl->transportFields();
}

MgaBdsIono::FieldsList MgaBdsIono::payloadFieldsImpl()
{
    return m_pImpl->payloadFields();
}

MgaBdsIono::MgaBdsIono(ImplPtr&& impl) :
    m_pImpl(std::move(impl))
{
}

} // namespace message

} // namespace cc_ublox

} // namespace Message

} // namespace cc_tools_qt_plugin
