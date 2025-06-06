// Generated by commsdsl2tools_qt v7.1.0

#include "MgaFlashEph.h"

#include "cc_tools_qt/ToolsMessageBase.h"
#include "cc_tools_qt_plugin/Message/cc_ublox/Message.h"
#include "cc_ublox/message/MgaFlashEph.h"

namespace cc_tools_qt_plugin
{

namespace Message
{

namespace cc_ublox
{

namespace message
{

class MgaFlashEphImpl : public
    cc_tools_qt::ToolsMessageBase<
        cc_tools_qt_plugin::Message::cc_ublox::Message,
        ::cc_ublox::message::MgaFlashEph,
        MgaFlashEphImpl
    >
{
public:
    MgaFlashEphImpl() = default;
    MgaFlashEphImpl(const MgaFlashEphImpl&) = default;
    MgaFlashEphImpl(MgaFlashEphImpl&&) = default;
    virtual ~MgaFlashEphImpl() = default;
    MgaFlashEphImpl& operator=(const MgaFlashEphImpl&) = default;
    MgaFlashEphImpl& operator=(MgaFlashEphImpl&&) = default;
};

MgaFlashEph::MgaFlashEph() : m_pImpl(new MgaFlashEphImpl) {}
MgaFlashEph::~MgaFlashEph() = default;

MgaFlashEph& MgaFlashEph::operator=(const MgaFlashEph& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

MgaFlashEph& MgaFlashEph::operator=(MgaFlashEph&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

const char* MgaFlashEph::nameImpl() const
{
    return m_pImpl->name();
}

bool MgaFlashEph::refreshMsgImpl()
{
    return m_pImpl->refreshMsg();
}

qlonglong MgaFlashEph::numericIdImpl() const
{
    return m_pImpl->numericId();
}

QString MgaFlashEph::idAsStringImpl() const
{
    return m_pImpl->idAsString();
}

void MgaFlashEph::resetImpl()
{
    m_pImpl->reset();
}

bool MgaFlashEph::assignImpl(const cc_tools_qt::ToolsMessage& other)
{
    auto* castedOther = dynamic_cast<const MgaFlashEph*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

bool MgaFlashEph::isValidImpl() const
{
    return m_pImpl->isValid();
}

MgaFlashEph::DataSeq MgaFlashEph::encodeDataImpl() const
{
    return m_pImpl->encodeData();
}

bool MgaFlashEph::decodeDataImpl(const DataSeq& data)
{
    return m_pImpl->decodeData(data);
}

MgaFlashEph::Ptr MgaFlashEph::cloneImpl() const
{
    ImplPtr impl(static_cast<MgaFlashEphImpl*>(m_pImpl->clone().release()));
    return Ptr(new MgaFlashEph(std::move(impl)));
}

void MgaFlashEph::assignProtMessageImpl(void* protMsg)
{
    m_pImpl->assignProtMessage(protMsg);
}

MgaFlashEph::DataSeq MgaFlashEph::encodeFramedImpl(cc_tools_qt::ToolsFrame& frame) const
{
    return m_pImpl->encodeFramed(frame);
}

MgaFlashEph::FieldsList MgaFlashEph::transportFieldsImpl()
{
    return m_pImpl->transportFields();
}

MgaFlashEph::FieldsList MgaFlashEph::payloadFieldsImpl()
{
    return m_pImpl->payloadFields();
}

MgaFlashEph::MgaFlashEph(ImplPtr&& impl) :
    m_pImpl(std::move(impl))
{
}

} // namespace message

} // namespace cc_ublox

} // namespace Message

} // namespace cc_tools_qt_plugin
