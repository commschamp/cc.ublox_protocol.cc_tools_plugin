// Generated by commsdsl2tools_qt v6.3.3

#include "NavTimeglo.h"

#include "cc_tools_qt/ProtocolMessageBase.h"
#include "cc_tools_qt/property/field.h"
#include "cc_tools_qt_plugin/cc_ublox/field/Itow.h"
#include "cc_tools_qt_plugin/cc_ublox/options/DefaultOptions.h"
#include "cc_ublox/message/NavTimeglo.h"

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
    using Field = ::cc_ublox::message::NavTimegloFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::Itow;
    auto props = cc_tools_qt_plugin::cc_ublox::field::createProps_itow(Field::name(), serHidden);
    return props;
}

static QVariantMap createProps_tOD(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::NavTimegloFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::TOD;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .asMap();
}

static QVariantMap createProps_fTOD(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::NavTimegloFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::FTOD;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .asMap();
}

static QVariantMap createProps_nt(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::NavTimegloFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::Nt;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .asMap();
}

static QVariantMap createProps_n4(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::NavTimegloFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::N4;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .asMap();
}

static QVariantMap createProps_valid(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::NavTimegloFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::Valid;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .add(0U, "todValid")
            .add(1U, "dateValid")
            .asMap();
}

static QVariantMap createProps_tAcc(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::NavTimegloFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::TAcc;
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
    props.append(createProps_tOD(false));
    props.append(createProps_fTOD(false));
    props.append(createProps_nt(false));
    props.append(createProps_n4(false));
    props.append(createProps_valid(false));
    props.append(createProps_tAcc(false));
    return props;
}

} // namespace

class NavTimegloImpl : public
    cc_tools_qt::ProtocolMessageBase<
        ::cc_ublox::message::NavTimeglo<cc_tools_qt_plugin::cc_ublox::Message, cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>,
        NavTimegloImpl
    >
{
public:
    NavTimegloImpl() = default;
    NavTimegloImpl(const NavTimegloImpl&) = delete;
    NavTimegloImpl(NavTimegloImpl&&) = delete;
    virtual ~NavTimegloImpl() = default;
    NavTimegloImpl& operator=(const NavTimegloImpl&) = default;
    NavTimegloImpl& operator=(NavTimegloImpl&&) = default;

protected:
    virtual const QVariantList& fieldsPropertiesImpl() const override
    {
        static const QVariantList Props = createProps();
        return Props;
    }
};

NavTimeglo::NavTimeglo() : m_pImpl(new NavTimegloImpl) {}
NavTimeglo::~NavTimeglo() = default;

NavTimeglo& NavTimeglo::operator=(const NavTimeglo& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

NavTimeglo& NavTimeglo::operator=(NavTimeglo&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

NavTimeglo::MsgIdParamType NavTimeglo::doGetId()
{
    return ::cc_ublox::message::NavTimeglo<cc_tools_qt_plugin::cc_ublox::Message, cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::doGetId();
}

const char* NavTimeglo::nameImpl() const
{
    return static_cast<const cc_tools_qt::Message*>(m_pImpl.get())->name();
}

const QVariantList& NavTimeglo::fieldsPropertiesImpl() const
{
    return m_pImpl->fieldsProperties();
}

void NavTimeglo::dispatchImpl(cc_tools_qt::MessageHandler& handler)
{
    static_cast<cc_tools_qt::Message*>(m_pImpl.get())->dispatch(handler);
}

void NavTimeglo::resetImpl()
{
    m_pImpl->reset();
}

bool NavTimeglo::assignImpl(const cc_tools_qt::Message& other)
{
    auto* castedOther = dynamic_cast<const NavTimeglo*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

NavTimeglo::MsgIdParamType NavTimeglo::getIdImpl() const
{
    return m_pImpl->getId();
}

comms::ErrorStatus NavTimeglo::readImpl(ReadIterator& iter, std::size_t len)
{
    return m_pImpl->read(iter, len);
}

comms::ErrorStatus NavTimeglo::writeImpl(WriteIterator& iter, std::size_t len) const
{
    return m_pImpl->write(iter, len);
}

bool NavTimeglo::validImpl() const
{
    return m_pImpl->valid();
}

std::size_t NavTimeglo::lengthImpl() const
{
    return m_pImpl->length();
}

bool NavTimeglo::refreshImpl()
{
    return m_pImpl->refresh();
}

} // namespace message

} // namespace cc_ublox

} // namespace cc_tools_qt_plugin
