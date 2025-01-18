// Generated by commsdsl2tools_qt v7.0.2

#include "MonSmgr.h"

#include "cc_tools_qt/ToolsMessageBase.h"
#include "cc_tools_qt_plugin/Message/cc_ublox/Message.h"
#include "cc_ublox/message/MonSmgr.h"

namespace cc_tools_qt_plugin
{

namespace Message
{

namespace cc_ublox
{

namespace message
{

class MonSmgrImpl : public
    cc_tools_qt::ToolsMessageBase<
        cc_tools_qt_plugin::Message::cc_ublox::Message,
        ::cc_ublox::message::MonSmgr,
        MonSmgrImpl
    >
{
public:
    MonSmgrImpl() = default;
    MonSmgrImpl(const MonSmgrImpl&) = default;
    MonSmgrImpl(MonSmgrImpl&&) = default;
    virtual ~MonSmgrImpl() = default;
    MonSmgrImpl& operator=(const MonSmgrImpl&) = default;
    MonSmgrImpl& operator=(MonSmgrImpl&&) = default;
};

MonSmgr::MonSmgr() : m_pImpl(new MonSmgrImpl) {}
MonSmgr::~MonSmgr() = default;

MonSmgr& MonSmgr::operator=(const MonSmgr& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

MonSmgr& MonSmgr::operator=(MonSmgr&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

const char* MonSmgr::nameImpl() const
{
    return m_pImpl->name();
}

bool MonSmgr::refreshMsgImpl()
{
    return m_pImpl->refreshMsg();
}

qlonglong MonSmgr::numericIdImpl() const
{
    return m_pImpl->numericId();
}

QString MonSmgr::idAsStringImpl() const
{
    return m_pImpl->idAsString();
}

void MonSmgr::resetImpl()
{
    m_pImpl->reset();
}

bool MonSmgr::assignImpl(const cc_tools_qt::ToolsMessage& other)
{
    auto* castedOther = dynamic_cast<const MonSmgr*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

bool MonSmgr::isValidImpl() const
{
    return m_pImpl->isValid();
}

MonSmgr::DataSeq MonSmgr::encodeDataImpl() const
{
    return m_pImpl->encodeData();
}

bool MonSmgr::decodeDataImpl(const DataSeq& data)
{
    return m_pImpl->decodeData(data);
}

MonSmgr::Ptr MonSmgr::cloneImpl() const
{
    ImplPtr impl(static_cast<MonSmgrImpl*>(m_pImpl->clone().release()));
    return Ptr(new MonSmgr(std::move(impl)));
}

void MonSmgr::assignProtMessageImpl(void* protMsg)
{
    m_pImpl->assignProtMessage(protMsg);
}

MonSmgr::DataSeq MonSmgr::encodeFramedImpl(cc_tools_qt::ToolsFrame& frame) const
{
    return m_pImpl->encodeFramed(frame);
}

MonSmgr::FieldsList MonSmgr::transportFieldsImpl()
{
    return m_pImpl->transportFields();
}

MonSmgr::FieldsList MonSmgr::payloadFieldsImpl()
{
    return m_pImpl->payloadFields();
}

MonSmgr::MonSmgr(ImplPtr&& impl) :
    m_pImpl(std::move(impl))
{
}

} // namespace message

} // namespace cc_ublox

} // namespace Message

} // namespace cc_tools_qt_plugin
