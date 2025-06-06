// Generated by commsdsl2tools_qt v7.1.0

#include "MgaIniEop.h"

#include "cc_tools_qt/ToolsMessageBase.h"
#include "cc_tools_qt_plugin/Message/cc_ublox/Message.h"
#include "cc_ublox/message/MgaIniEop.h"

namespace cc_tools_qt_plugin
{

namespace Message
{

namespace cc_ublox
{

namespace message
{

class MgaIniEopImpl : public
    cc_tools_qt::ToolsMessageBase<
        cc_tools_qt_plugin::Message::cc_ublox::Message,
        ::cc_ublox::message::MgaIniEop,
        MgaIniEopImpl
    >
{
public:
    MgaIniEopImpl() = default;
    MgaIniEopImpl(const MgaIniEopImpl&) = default;
    MgaIniEopImpl(MgaIniEopImpl&&) = default;
    virtual ~MgaIniEopImpl() = default;
    MgaIniEopImpl& operator=(const MgaIniEopImpl&) = default;
    MgaIniEopImpl& operator=(MgaIniEopImpl&&) = default;
};

MgaIniEop::MgaIniEop() : m_pImpl(new MgaIniEopImpl) {}
MgaIniEop::~MgaIniEop() = default;

MgaIniEop& MgaIniEop::operator=(const MgaIniEop& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

MgaIniEop& MgaIniEop::operator=(MgaIniEop&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

const char* MgaIniEop::nameImpl() const
{
    return m_pImpl->name();
}

bool MgaIniEop::refreshMsgImpl()
{
    return m_pImpl->refreshMsg();
}

qlonglong MgaIniEop::numericIdImpl() const
{
    return m_pImpl->numericId();
}

QString MgaIniEop::idAsStringImpl() const
{
    return m_pImpl->idAsString();
}

void MgaIniEop::resetImpl()
{
    m_pImpl->reset();
}

bool MgaIniEop::assignImpl(const cc_tools_qt::ToolsMessage& other)
{
    auto* castedOther = dynamic_cast<const MgaIniEop*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

bool MgaIniEop::isValidImpl() const
{
    return m_pImpl->isValid();
}

MgaIniEop::DataSeq MgaIniEop::encodeDataImpl() const
{
    return m_pImpl->encodeData();
}

bool MgaIniEop::decodeDataImpl(const DataSeq& data)
{
    return m_pImpl->decodeData(data);
}

MgaIniEop::Ptr MgaIniEop::cloneImpl() const
{
    ImplPtr impl(static_cast<MgaIniEopImpl*>(m_pImpl->clone().release()));
    return Ptr(new MgaIniEop(std::move(impl)));
}

void MgaIniEop::assignProtMessageImpl(void* protMsg)
{
    m_pImpl->assignProtMessage(protMsg);
}

MgaIniEop::DataSeq MgaIniEop::encodeFramedImpl(cc_tools_qt::ToolsFrame& frame) const
{
    return m_pImpl->encodeFramed(frame);
}

MgaIniEop::FieldsList MgaIniEop::transportFieldsImpl()
{
    return m_pImpl->transportFields();
}

MgaIniEop::FieldsList MgaIniEop::payloadFieldsImpl()
{
    return m_pImpl->payloadFields();
}

MgaIniEop::MgaIniEop(ImplPtr&& impl) :
    m_pImpl(std::move(impl))
{
}

} // namespace message

} // namespace cc_ublox

} // namespace Message

} // namespace cc_tools_qt_plugin
