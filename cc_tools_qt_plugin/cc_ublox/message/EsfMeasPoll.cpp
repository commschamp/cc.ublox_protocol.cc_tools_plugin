// Generated by commsdsl2tools_qt v6.3.0

#include "EsfMeasPoll.h"

#include "cc_tools_qt/ProtocolMessageBase.h"
#include "cc_tools_qt/property/field.h"
#include "cc_tools_qt_plugin/cc_ublox/options/DefaultOptions.h"
#include "cc_ublox/message/EsfMeasPoll.h"

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

class EsfMeasPollImpl : public
    cc_tools_qt::ProtocolMessageBase<
        ::cc_ublox::message::EsfMeasPoll<cc_tools_qt_plugin::cc_ublox::Message, cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>,
        EsfMeasPollImpl
    >
{
public:
    EsfMeasPollImpl() = default;
    EsfMeasPollImpl(const EsfMeasPollImpl&) = delete;
    EsfMeasPollImpl(EsfMeasPollImpl&&) = delete;
    virtual ~EsfMeasPollImpl() = default;
    EsfMeasPollImpl& operator=(const EsfMeasPollImpl&) = default;
    EsfMeasPollImpl& operator=(EsfMeasPollImpl&&) = default;

protected:
    virtual const QVariantList& fieldsPropertiesImpl() const override
    {
        static const QVariantList Props = createProps();
        return Props;
    }
};

EsfMeasPoll::EsfMeasPoll() : m_pImpl(new EsfMeasPollImpl) {}
EsfMeasPoll::~EsfMeasPoll() = default;

EsfMeasPoll& EsfMeasPoll::operator=(const EsfMeasPoll& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

EsfMeasPoll& EsfMeasPoll::operator=(EsfMeasPoll&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

EsfMeasPoll::MsgIdParamType EsfMeasPoll::doGetId()
{
    return ::cc_ublox::message::EsfMeasPoll<cc_tools_qt_plugin::cc_ublox::Message, cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::doGetId();
}

const char* EsfMeasPoll::nameImpl() const
{
    return static_cast<const cc_tools_qt::Message*>(m_pImpl.get())->name();
}

const QVariantList& EsfMeasPoll::fieldsPropertiesImpl() const
{
    return m_pImpl->fieldsProperties();
}

void EsfMeasPoll::dispatchImpl(cc_tools_qt::MessageHandler& handler)
{
    static_cast<cc_tools_qt::Message*>(m_pImpl.get())->dispatch(handler);
}

void EsfMeasPoll::resetImpl()
{
    m_pImpl->reset();
}

bool EsfMeasPoll::assignImpl(const cc_tools_qt::Message& other)
{
    auto* castedOther = dynamic_cast<const EsfMeasPoll*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

EsfMeasPoll::MsgIdParamType EsfMeasPoll::getIdImpl() const
{
    return m_pImpl->getId();
}

comms::ErrorStatus EsfMeasPoll::readImpl(ReadIterator& iter, std::size_t len)
{
    return m_pImpl->read(iter, len);
}

comms::ErrorStatus EsfMeasPoll::writeImpl(WriteIterator& iter, std::size_t len) const
{
    return m_pImpl->write(iter, len);
}

bool EsfMeasPoll::validImpl() const
{
    return m_pImpl->valid();
}

std::size_t EsfMeasPoll::lengthImpl() const
{
    return m_pImpl->length();
}

bool EsfMeasPoll::refreshImpl()
{
    return m_pImpl->refresh();
}

} // namespace message

} // namespace cc_ublox

} // namespace cc_tools_qt_plugin
