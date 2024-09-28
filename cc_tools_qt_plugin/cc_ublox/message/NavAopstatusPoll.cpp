// Generated by commsdsl2tools_qt v6.3.4

#include "NavAopstatusPoll.h"

#include "cc_tools_qt/ProtocolMessageBase.h"
#include "cc_tools_qt/property/field.h"
#include "cc_tools_qt_plugin/cc_ublox/options/DefaultOptions.h"
#include "cc_ublox/message/NavAopstatusPoll.h"

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

class NavAopstatusPollImpl : public
    cc_tools_qt::ProtocolMessageBase<
        ::cc_ublox::message::NavAopstatusPoll<cc_tools_qt_plugin::cc_ublox::Message, cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>,
        NavAopstatusPollImpl
    >
{
public:
    NavAopstatusPollImpl() = default;
    NavAopstatusPollImpl(const NavAopstatusPollImpl&) = delete;
    NavAopstatusPollImpl(NavAopstatusPollImpl&&) = delete;
    virtual ~NavAopstatusPollImpl() = default;
    NavAopstatusPollImpl& operator=(const NavAopstatusPollImpl&) = default;
    NavAopstatusPollImpl& operator=(NavAopstatusPollImpl&&) = default;

protected:
    virtual const QVariantList& fieldsPropertiesImpl() const override
    {
        static const QVariantList Props = createProps();
        return Props;
    }
};

NavAopstatusPoll::NavAopstatusPoll() : m_pImpl(new NavAopstatusPollImpl) {}
NavAopstatusPoll::~NavAopstatusPoll() = default;

NavAopstatusPoll& NavAopstatusPoll::operator=(const NavAopstatusPoll& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

NavAopstatusPoll& NavAopstatusPoll::operator=(NavAopstatusPoll&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

NavAopstatusPoll::MsgIdParamType NavAopstatusPoll::doGetId()
{
    return ::cc_ublox::message::NavAopstatusPoll<cc_tools_qt_plugin::cc_ublox::Message, cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::doGetId();
}

const char* NavAopstatusPoll::nameImpl() const
{
    return static_cast<const cc_tools_qt::Message*>(m_pImpl.get())->name();
}

const QVariantList& NavAopstatusPoll::fieldsPropertiesImpl() const
{
    return m_pImpl->fieldsProperties();
}

void NavAopstatusPoll::dispatchImpl(cc_tools_qt::MessageHandler& handler)
{
    static_cast<cc_tools_qt::Message*>(m_pImpl.get())->dispatch(handler);
}

void NavAopstatusPoll::resetImpl()
{
    m_pImpl->reset();
}

bool NavAopstatusPoll::assignImpl(const cc_tools_qt::Message& other)
{
    auto* castedOther = dynamic_cast<const NavAopstatusPoll*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

NavAopstatusPoll::MsgIdParamType NavAopstatusPoll::getIdImpl() const
{
    return m_pImpl->getId();
}

comms::ErrorStatus NavAopstatusPoll::readImpl(ReadIterator& iter, std::size_t len)
{
    return m_pImpl->read(iter, len);
}

comms::ErrorStatus NavAopstatusPoll::writeImpl(WriteIterator& iter, std::size_t len) const
{
    return m_pImpl->write(iter, len);
}

bool NavAopstatusPoll::validImpl() const
{
    return m_pImpl->valid();
}

std::size_t NavAopstatusPoll::lengthImpl() const
{
    return m_pImpl->length();
}

bool NavAopstatusPoll::refreshImpl()
{
    return m_pImpl->refresh();
}

} // namespace message

} // namespace cc_ublox

} // namespace cc_tools_qt_plugin
