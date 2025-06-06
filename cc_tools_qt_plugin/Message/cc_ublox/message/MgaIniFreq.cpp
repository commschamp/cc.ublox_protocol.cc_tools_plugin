// Generated by commsdsl2tools_qt v7.1.0

#include "MgaIniFreq.h"

#include "cc_tools_qt/ToolsMessageBase.h"
#include "cc_tools_qt_plugin/Message/cc_ublox/Message.h"
#include "cc_ublox/message/MgaIniFreq.h"

namespace cc_tools_qt_plugin
{

namespace Message
{

namespace cc_ublox
{

namespace message
{

class MgaIniFreqImpl : public
    cc_tools_qt::ToolsMessageBase<
        cc_tools_qt_plugin::Message::cc_ublox::Message,
        ::cc_ublox::message::MgaIniFreq,
        MgaIniFreqImpl
    >
{
public:
    MgaIniFreqImpl() = default;
    MgaIniFreqImpl(const MgaIniFreqImpl&) = default;
    MgaIniFreqImpl(MgaIniFreqImpl&&) = default;
    virtual ~MgaIniFreqImpl() = default;
    MgaIniFreqImpl& operator=(const MgaIniFreqImpl&) = default;
    MgaIniFreqImpl& operator=(MgaIniFreqImpl&&) = default;
};

MgaIniFreq::MgaIniFreq() : m_pImpl(new MgaIniFreqImpl) {}
MgaIniFreq::~MgaIniFreq() = default;

MgaIniFreq& MgaIniFreq::operator=(const MgaIniFreq& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

MgaIniFreq& MgaIniFreq::operator=(MgaIniFreq&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

const char* MgaIniFreq::nameImpl() const
{
    return m_pImpl->name();
}

bool MgaIniFreq::refreshMsgImpl()
{
    return m_pImpl->refreshMsg();
}

qlonglong MgaIniFreq::numericIdImpl() const
{
    return m_pImpl->numericId();
}

QString MgaIniFreq::idAsStringImpl() const
{
    return m_pImpl->idAsString();
}

void MgaIniFreq::resetImpl()
{
    m_pImpl->reset();
}

bool MgaIniFreq::assignImpl(const cc_tools_qt::ToolsMessage& other)
{
    auto* castedOther = dynamic_cast<const MgaIniFreq*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

bool MgaIniFreq::isValidImpl() const
{
    return m_pImpl->isValid();
}

MgaIniFreq::DataSeq MgaIniFreq::encodeDataImpl() const
{
    return m_pImpl->encodeData();
}

bool MgaIniFreq::decodeDataImpl(const DataSeq& data)
{
    return m_pImpl->decodeData(data);
}

MgaIniFreq::Ptr MgaIniFreq::cloneImpl() const
{
    ImplPtr impl(static_cast<MgaIniFreqImpl*>(m_pImpl->clone().release()));
    return Ptr(new MgaIniFreq(std::move(impl)));
}

void MgaIniFreq::assignProtMessageImpl(void* protMsg)
{
    m_pImpl->assignProtMessage(protMsg);
}

MgaIniFreq::DataSeq MgaIniFreq::encodeFramedImpl(cc_tools_qt::ToolsFrame& frame) const
{
    return m_pImpl->encodeFramed(frame);
}

MgaIniFreq::FieldsList MgaIniFreq::transportFieldsImpl()
{
    return m_pImpl->transportFields();
}

MgaIniFreq::FieldsList MgaIniFreq::payloadFieldsImpl()
{
    return m_pImpl->payloadFields();
}

MgaIniFreq::MgaIniFreq(ImplPtr&& impl) :
    m_pImpl(std::move(impl))
{
}

} // namespace message

} // namespace cc_ublox

} // namespace Message

} // namespace cc_tools_qt_plugin
