// Generated by commsdsl2tools_qt v7.0.0

#include "MgaGpsIono.h"

#include "cc_tools_qt/ToolsMessageBase.h"
#include "cc_tools_qt_plugin/Message/cc_ublox/Message.h"
#include "cc_ublox/message/MgaGpsIono.h"

namespace cc_tools_qt_plugin
{

namespace Message
{

namespace cc_ublox
{

namespace message
{

class MgaGpsIonoImpl : public
    cc_tools_qt::ToolsMessageBase<
        cc_tools_qt_plugin::Message::cc_ublox::Message,
        ::cc_ublox::message::MgaGpsIono,
        MgaGpsIonoImpl
    >
{
public:
    MgaGpsIonoImpl() = default;
    MgaGpsIonoImpl(const MgaGpsIonoImpl&) = default;
    MgaGpsIonoImpl(MgaGpsIonoImpl&&) = default;
    virtual ~MgaGpsIonoImpl() = default;
    MgaGpsIonoImpl& operator=(const MgaGpsIonoImpl&) = default;
    MgaGpsIonoImpl& operator=(MgaGpsIonoImpl&&) = default;
};

MgaGpsIono::MgaGpsIono() : m_pImpl(new MgaGpsIonoImpl) {}
MgaGpsIono::~MgaGpsIono() = default;

MgaGpsIono& MgaGpsIono::operator=(const MgaGpsIono& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

MgaGpsIono& MgaGpsIono::operator=(MgaGpsIono&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

const char* MgaGpsIono::nameImpl() const
{
    return m_pImpl->name();
}

bool MgaGpsIono::refreshMsgImpl()
{
    return m_pImpl->refreshMsg();
}

qlonglong MgaGpsIono::numericIdImpl() const
{
    return m_pImpl->numericId();
}

QString MgaGpsIono::idAsStringImpl() const
{
    return m_pImpl->idAsString();
}

void MgaGpsIono::resetImpl()
{
    m_pImpl->reset();
}

bool MgaGpsIono::assignImpl(const cc_tools_qt::ToolsMessage& other)
{
    auto* castedOther = dynamic_cast<const MgaGpsIono*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

bool MgaGpsIono::isValidImpl() const
{
    return m_pImpl->isValid();
}

MgaGpsIono::DataSeq MgaGpsIono::encodeDataImpl() const
{
    return m_pImpl->encodeData();
}

bool MgaGpsIono::decodeDataImpl(const DataSeq& data)
{
    return m_pImpl->decodeData(data);
}

MgaGpsIono::Ptr MgaGpsIono::cloneImpl() const
{
    ImplPtr impl(static_cast<MgaGpsIonoImpl*>(m_pImpl->clone().release()));
    return Ptr(new MgaGpsIono(std::move(impl)));
}

void MgaGpsIono::assignProtMessageImpl(void* protMsg)
{
    m_pImpl->assignProtMessage(protMsg);
}

MgaGpsIono::DataSeq MgaGpsIono::encodeFramedImpl(cc_tools_qt::ToolsFrame& frame) const
{
    return m_pImpl->encodeFramed(frame);
}

MgaGpsIono::FieldsList MgaGpsIono::transportFieldsImpl()
{
    return m_pImpl->transportFields();
}

MgaGpsIono::FieldsList MgaGpsIono::payloadFieldsImpl()
{
    return m_pImpl->payloadFields();
}

MgaGpsIono::MgaGpsIono(ImplPtr&& impl) :
    m_pImpl(std::move(impl))
{
}

} // namespace message

} // namespace cc_ublox

} // namespace Message

} // namespace cc_tools_qt_plugin
