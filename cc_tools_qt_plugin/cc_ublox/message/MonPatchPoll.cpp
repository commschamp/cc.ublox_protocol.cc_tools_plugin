// Generated by commsdsl2tools_qt v6.3.3

#include "MonPatchPoll.h"

#include "cc_tools_qt/ProtocolMessageBase.h"
#include "cc_tools_qt/property/field.h"
#include "cc_tools_qt_plugin/cc_ublox/options/DefaultOptions.h"
#include "cc_ublox/message/MonPatchPoll.h"

namespace cc_tools_qt_plugin
{

namespace cc_ublox
{

namespace message
{

namespace
{

QVariantList createProps()
{
    QVariantList props;
    return props;
}

} // namespace

class MonPatchPollImpl : public
    cc_tools_qt::ProtocolMessageBase<
        ::cc_ublox::message::MonPatchPoll<cc_tools_qt_plugin::cc_ublox::Message, cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>,
        MonPatchPollImpl
    >
{
public:
    MonPatchPollImpl() = default;
    MonPatchPollImpl(const MonPatchPollImpl&) = delete;
    MonPatchPollImpl(MonPatchPollImpl&&) = delete;
    virtual ~MonPatchPollImpl() = default;
    MonPatchPollImpl& operator=(const MonPatchPollImpl&) = default;
    MonPatchPollImpl& operator=(MonPatchPollImpl&&) = default;

protected:
    virtual const QVariantList& fieldsPropertiesImpl() const override
    {
        static const QVariantList Props = createProps();
        return Props;
    }
};

MonPatchPoll::MonPatchPoll() : m_pImpl(new MonPatchPollImpl) {}
MonPatchPoll::~MonPatchPoll() = default;

MonPatchPoll& MonPatchPoll::operator=(const MonPatchPoll& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

MonPatchPoll& MonPatchPoll::operator=(MonPatchPoll&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

MonPatchPoll::MsgIdParamType MonPatchPoll::doGetId()
{
    return ::cc_ublox::message::MonPatchPoll<cc_tools_qt_plugin::cc_ublox::Message, cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::doGetId();
}

const char* MonPatchPoll::nameImpl() const
{
    return static_cast<const cc_tools_qt::Message*>(m_pImpl.get())->name();
}

const QVariantList& MonPatchPoll::fieldsPropertiesImpl() const
{
    return m_pImpl->fieldsProperties();
}

void MonPatchPoll::dispatchImpl(cc_tools_qt::MessageHandler& handler)
{
    static_cast<cc_tools_qt::Message*>(m_pImpl.get())->dispatch(handler);
}

void MonPatchPoll::resetImpl()
{
    m_pImpl->reset();
}

bool MonPatchPoll::assignImpl(const cc_tools_qt::Message& other)
{
    auto* castedOther = dynamic_cast<const MonPatchPoll*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

MonPatchPoll::MsgIdParamType MonPatchPoll::getIdImpl() const
{
    return m_pImpl->getId();
}

comms::ErrorStatus MonPatchPoll::readImpl(ReadIterator& iter, std::size_t len)
{
    return m_pImpl->read(iter, len);
}

comms::ErrorStatus MonPatchPoll::writeImpl(WriteIterator& iter, std::size_t len) const
{
    return m_pImpl->write(iter, len);
}

bool MonPatchPoll::validImpl() const
{
    return m_pImpl->valid();
}

std::size_t MonPatchPoll::lengthImpl() const
{
    return m_pImpl->length();
}

bool MonPatchPoll::refreshImpl()
{
    return m_pImpl->refresh();
}

} // namespace message

} // namespace cc_ublox

} // namespace cc_tools_qt_plugin
