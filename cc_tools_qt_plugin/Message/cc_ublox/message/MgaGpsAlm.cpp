// Generated by commsdsl2tools_qt v7.0.2

#include "MgaGpsAlm.h"

#include "cc_tools_qt/ToolsMessageBase.h"
#include "cc_tools_qt_plugin/Message/cc_ublox/Message.h"
#include "cc_ublox/message/MgaGpsAlm.h"

namespace cc_tools_qt_plugin
{

namespace Message
{

namespace cc_ublox
{

namespace message
{

class MgaGpsAlmImpl : public
    cc_tools_qt::ToolsMessageBase<
        cc_tools_qt_plugin::Message::cc_ublox::Message,
        ::cc_ublox::message::MgaGpsAlm,
        MgaGpsAlmImpl
    >
{
public:
    MgaGpsAlmImpl() = default;
    MgaGpsAlmImpl(const MgaGpsAlmImpl&) = default;
    MgaGpsAlmImpl(MgaGpsAlmImpl&&) = default;
    virtual ~MgaGpsAlmImpl() = default;
    MgaGpsAlmImpl& operator=(const MgaGpsAlmImpl&) = default;
    MgaGpsAlmImpl& operator=(MgaGpsAlmImpl&&) = default;
};

MgaGpsAlm::MgaGpsAlm() : m_pImpl(new MgaGpsAlmImpl) {}
MgaGpsAlm::~MgaGpsAlm() = default;

MgaGpsAlm& MgaGpsAlm::operator=(const MgaGpsAlm& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

MgaGpsAlm& MgaGpsAlm::operator=(MgaGpsAlm&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

const char* MgaGpsAlm::nameImpl() const
{
    return m_pImpl->name();
}

bool MgaGpsAlm::refreshMsgImpl()
{
    return m_pImpl->refreshMsg();
}

qlonglong MgaGpsAlm::numericIdImpl() const
{
    return m_pImpl->numericId();
}

QString MgaGpsAlm::idAsStringImpl() const
{
    return m_pImpl->idAsString();
}

void MgaGpsAlm::resetImpl()
{
    m_pImpl->reset();
}

bool MgaGpsAlm::assignImpl(const cc_tools_qt::ToolsMessage& other)
{
    auto* castedOther = dynamic_cast<const MgaGpsAlm*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

bool MgaGpsAlm::isValidImpl() const
{
    return m_pImpl->isValid();
}

MgaGpsAlm::DataSeq MgaGpsAlm::encodeDataImpl() const
{
    return m_pImpl->encodeData();
}

bool MgaGpsAlm::decodeDataImpl(const DataSeq& data)
{
    return m_pImpl->decodeData(data);
}

MgaGpsAlm::Ptr MgaGpsAlm::cloneImpl() const
{
    ImplPtr impl(static_cast<MgaGpsAlmImpl*>(m_pImpl->clone().release()));
    return Ptr(new MgaGpsAlm(std::move(impl)));
}

void MgaGpsAlm::assignProtMessageImpl(void* protMsg)
{
    m_pImpl->assignProtMessage(protMsg);
}

MgaGpsAlm::DataSeq MgaGpsAlm::encodeFramedImpl(cc_tools_qt::ToolsFrame& frame) const
{
    return m_pImpl->encodeFramed(frame);
}

MgaGpsAlm::FieldsList MgaGpsAlm::transportFieldsImpl()
{
    return m_pImpl->transportFields();
}

MgaGpsAlm::FieldsList MgaGpsAlm::payloadFieldsImpl()
{
    return m_pImpl->payloadFields();
}

MgaGpsAlm::MgaGpsAlm(ImplPtr&& impl) :
    m_pImpl(std::move(impl))
{
}

} // namespace message

} // namespace cc_ublox

} // namespace Message

} // namespace cc_tools_qt_plugin
