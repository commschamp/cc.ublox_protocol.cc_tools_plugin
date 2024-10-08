// Generated by commsdsl2tools_qt v6.3.4

#include "NavPosecefPoll.h"

#include "cc_tools_qt/ProtocolMessageBase.h"
#include "cc_tools_qt/property/field.h"
#include "cc_tools_qt_plugin/cc_ublox/options/DefaultOptions.h"
#include "cc_ublox/message/NavPosecefPoll.h"

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

class NavPosecefPollImpl : public
    cc_tools_qt::ProtocolMessageBase<
        ::cc_ublox::message::NavPosecefPoll<cc_tools_qt_plugin::cc_ublox::Message, cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>,
        NavPosecefPollImpl
    >
{
public:
    NavPosecefPollImpl() = default;
    NavPosecefPollImpl(const NavPosecefPollImpl&) = delete;
    NavPosecefPollImpl(NavPosecefPollImpl&&) = delete;
    virtual ~NavPosecefPollImpl() = default;
    NavPosecefPollImpl& operator=(const NavPosecefPollImpl&) = default;
    NavPosecefPollImpl& operator=(NavPosecefPollImpl&&) = default;

protected:
    virtual const QVariantList& fieldsPropertiesImpl() const override
    {
        static const QVariantList Props = createProps();
        return Props;
    }
};

NavPosecefPoll::NavPosecefPoll() : m_pImpl(new NavPosecefPollImpl) {}
NavPosecefPoll::~NavPosecefPoll() = default;

NavPosecefPoll& NavPosecefPoll::operator=(const NavPosecefPoll& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

NavPosecefPoll& NavPosecefPoll::operator=(NavPosecefPoll&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

NavPosecefPoll::MsgIdParamType NavPosecefPoll::doGetId()
{
    return ::cc_ublox::message::NavPosecefPoll<cc_tools_qt_plugin::cc_ublox::Message, cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::doGetId();
}

const char* NavPosecefPoll::nameImpl() const
{
    return static_cast<const cc_tools_qt::Message*>(m_pImpl.get())->name();
}

const QVariantList& NavPosecefPoll::fieldsPropertiesImpl() const
{
    return m_pImpl->fieldsProperties();
}

void NavPosecefPoll::dispatchImpl(cc_tools_qt::MessageHandler& handler)
{
    static_cast<cc_tools_qt::Message*>(m_pImpl.get())->dispatch(handler);
}

void NavPosecefPoll::resetImpl()
{
    m_pImpl->reset();
}

bool NavPosecefPoll::assignImpl(const cc_tools_qt::Message& other)
{
    auto* castedOther = dynamic_cast<const NavPosecefPoll*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

NavPosecefPoll::MsgIdParamType NavPosecefPoll::getIdImpl() const
{
    return m_pImpl->getId();
}

comms::ErrorStatus NavPosecefPoll::readImpl(ReadIterator& iter, std::size_t len)
{
    return m_pImpl->read(iter, len);
}

comms::ErrorStatus NavPosecefPoll::writeImpl(WriteIterator& iter, std::size_t len) const
{
    return m_pImpl->write(iter, len);
}

bool NavPosecefPoll::validImpl() const
{
    return m_pImpl->valid();
}

std::size_t NavPosecefPoll::lengthImpl() const
{
    return m_pImpl->length();
}

bool NavPosecefPoll::refreshImpl()
{
    return m_pImpl->refresh();
}

} // namespace message

} // namespace cc_ublox

} // namespace cc_tools_qt_plugin
