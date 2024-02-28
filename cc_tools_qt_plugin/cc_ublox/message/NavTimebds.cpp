// Generated by commsdsl2tools_qt v6.3.0

#include "NavTimebds.h"

#include "cc_tools_qt/ProtocolMessageBase.h"
#include "cc_tools_qt/property/field.h"
#include "cc_tools_qt_plugin/cc_ublox/field/Itow.h"
#include "cc_tools_qt_plugin/cc_ublox/options/DefaultOptions.h"
#include "cc_ublox/message/NavTimebds.h"

namespace cc_tools_qt_plugin
{

namespace cc_ublox
{

namespace message
{

namespace
{

static QVariantMap createProps_itow(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::NavTimebdsFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::Itow;
    auto props = cc_tools_qt_plugin::cc_ublox::field::createProps_itow(Field::name(), serHidden);
    return props;
}

static QVariantMap createProps_sOW(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::NavTimebdsFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::SOW;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .asMap();
}

static QVariantMap createProps_fSOW(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::NavTimebdsFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::FSOW;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .asMap();
}

static QVariantMap createProps_week(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::NavTimebdsFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::Week;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .asMap();
}

static QVariantMap createProps_leapS(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::NavTimebdsFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::LeapS;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .asMap();
}

static QVariantMap createProps_valid(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::NavTimebdsFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::Valid;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .add(0U, "sowValid")
            .add(1U, "weekValid")
            .add(2U, "leapSValid")
            .asMap();
}

static QVariantMap createProps_tAcc(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::NavTimebdsFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::TAcc;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .asMap();
}

QVariantList createProps()
{
    QVariantList props;
    props.append(createProps_itow(false));
    props.append(createProps_sOW(false));
    props.append(createProps_fSOW(false));
    props.append(createProps_week(false));
    props.append(createProps_leapS(false));
    props.append(createProps_valid(false));
    props.append(createProps_tAcc(false));
    return props;
}

} // namespace

class NavTimebdsImpl : public
    cc_tools_qt::ProtocolMessageBase<
        ::cc_ublox::message::NavTimebds<cc_tools_qt_plugin::cc_ublox::Message, cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>,
        NavTimebdsImpl
    >
{
public:
    NavTimebdsImpl() = default;
    NavTimebdsImpl(const NavTimebdsImpl&) = delete;
    NavTimebdsImpl(NavTimebdsImpl&&) = delete;
    virtual ~NavTimebdsImpl() = default;
    NavTimebdsImpl& operator=(const NavTimebdsImpl&) = default;
    NavTimebdsImpl& operator=(NavTimebdsImpl&&) = default;

protected:
    virtual const QVariantList& fieldsPropertiesImpl() const override
    {
        static const QVariantList Props = createProps();
        return Props;
    }
};

NavTimebds::NavTimebds() : m_pImpl(new NavTimebdsImpl) {}
NavTimebds::~NavTimebds() = default;

NavTimebds& NavTimebds::operator=(const NavTimebds& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

NavTimebds& NavTimebds::operator=(NavTimebds&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

NavTimebds::MsgIdParamType NavTimebds::doGetId()
{
    return ::cc_ublox::message::NavTimebds<cc_tools_qt_plugin::cc_ublox::Message, cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::doGetId();
}

const char* NavTimebds::nameImpl() const
{
    return static_cast<const cc_tools_qt::Message*>(m_pImpl.get())->name();
}

const QVariantList& NavTimebds::fieldsPropertiesImpl() const
{
    return m_pImpl->fieldsProperties();
}

void NavTimebds::dispatchImpl(cc_tools_qt::MessageHandler& handler)
{
    static_cast<cc_tools_qt::Message*>(m_pImpl.get())->dispatch(handler);
}

void NavTimebds::resetImpl()
{
    m_pImpl->reset();
}

bool NavTimebds::assignImpl(const cc_tools_qt::Message& other)
{
    auto* castedOther = dynamic_cast<const NavTimebds*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

NavTimebds::MsgIdParamType NavTimebds::getIdImpl() const
{
    return m_pImpl->getId();
}

comms::ErrorStatus NavTimebds::readImpl(ReadIterator& iter, std::size_t len)
{
    return m_pImpl->read(iter, len);
}

comms::ErrorStatus NavTimebds::writeImpl(WriteIterator& iter, std::size_t len) const
{
    return m_pImpl->write(iter, len);
}

bool NavTimebds::validImpl() const
{
    return m_pImpl->valid();
}

std::size_t NavTimebds::lengthImpl() const
{
    return m_pImpl->length();
}

bool NavTimebds::refreshImpl()
{
    return m_pImpl->refresh();
}

} // namespace message

} // namespace cc_ublox

} // namespace cc_tools_qt_plugin