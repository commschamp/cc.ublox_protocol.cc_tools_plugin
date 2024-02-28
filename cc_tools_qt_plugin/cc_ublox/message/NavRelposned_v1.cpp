// Generated by commsdsl2tools_qt v6.3.0

#include "NavRelposned_v1.h"

#include "cc_tools_qt/ProtocolMessageBase.h"
#include "cc_tools_qt/property/field.h"
#include "cc_tools_qt_plugin/cc_ublox/field/Itow.h"
#include "cc_tools_qt_plugin/cc_ublox/field/Res1.h"
#include "cc_tools_qt_plugin/cc_ublox/field/Res4.h"
#include "cc_tools_qt_plugin/cc_ublox/options/DefaultOptions.h"
#include "cc_ublox/message/NavRelposned_v1.h"

namespace cc_tools_qt_plugin
{

namespace cc_ublox
{

namespace message
{

namespace
{

static QVariantMap createProps_version(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::NavRelposned_v1Fields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::Version;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .asMap();
}

static QVariantMap createProps_reserved1(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::NavRelposned_v1Fields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::Reserved1;
    auto props = cc_tools_qt_plugin::cc_ublox::field::createProps_res1(Field::name(), serHidden);
    return props;
}

static QVariantMap createProps_refStationId(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::NavRelposned_v1Fields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::RefStationId;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .asMap();
}

static QVariantMap createProps_itow(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::NavRelposned_v1Fields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::Itow;
    auto props = cc_tools_qt_plugin::cc_ublox::field::createProps_itow(Field::name(), serHidden);
    return props;
}

static QVariantMap createProps_relPosN(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::NavRelposned_v1Fields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::RelPosN;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .asMap();
}

static QVariantMap createProps_relPosE(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::NavRelposned_v1Fields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::RelPosE;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .asMap();
}

static QVariantMap createProps_relPosD(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::NavRelposned_v1Fields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::RelPosD;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .asMap();
}

static QVariantMap createProps_relPosLength(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::NavRelposned_v1Fields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::RelPosLength;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .asMap();
}

static QVariantMap createProps_relPosHeading(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::NavRelposned_v1Fields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::RelPosHeading;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .scaledDecimals(5U)
            .asMap();
}

static QVariantMap createProps_reserved2(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::NavRelposned_v1Fields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::Reserved2;
    auto props = cc_tools_qt_plugin::cc_ublox::field::createProps_res4(Field::name(), serHidden);
    return props;
}

static QVariantMap createProps_relPosHPN(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::NavRelposned_v1Fields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::RelPosHPN;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .scaledDecimals(1U)
            .asMap();
}

static QVariantMap createProps_relPosHPE(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::NavRelposned_v1Fields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::RelPosHPE;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .scaledDecimals(1U)
            .asMap();
}

static QVariantMap createProps_relPosHPD(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::NavRelposned_v1Fields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::RelPosHPD;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .scaledDecimals(1U)
            .asMap();
}

static QVariantMap createProps_relPosHPLength(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::NavRelposned_v1Fields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::RelPosHPLength;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .scaledDecimals(1U)
            .asMap();
}

static QVariantMap createProps_accN(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::NavRelposned_v1Fields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::AccN;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .scaledDecimals(1U)
            .asMap();
}

static QVariantMap createProps_accE(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::NavRelposned_v1Fields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::AccE;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .scaledDecimals(1U)
            .asMap();
}

static QVariantMap createProps_accD(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::NavRelposned_v1Fields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::AccD;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .scaledDecimals(1U)
            .asMap();
}

static QVariantMap createProps_accLength(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::NavRelposned_v1Fields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::AccLength;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .scaledDecimals(1U)
            .asMap();
}

static QVariantMap createProps_accHeading(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::NavRelposned_v1Fields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::AccHeading;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .scaledDecimals(5U)
            .asMap();
}

static QVariantMap createProps_reserved3(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::NavRelposned_v1Fields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::Reserved3;
    auto props = cc_tools_qt_plugin::cc_ublox::field::createProps_res4(Field::name(), serHidden);
    return props;
}

struct FlagsMembers
{
    static QVariantMap createProps_bitsLow(bool serHidden)
    {
        static_cast<void>(serHidden);
        using Field = ::cc_ublox::message::NavRelposned_v1Fields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::FlagsMembers::BitsLow;
        return
            cc_tools_qt::property::field::ForField<Field>()
                .name(Field::name())
                .serialisedHidden(serHidden)
                .add(0U, "gnssFixOK")
                .add(1U, "diffSoln")
                .add(2U, "relPosValid")
                .asMap();
    }

    static QVariantMap createProps_carrSoln(bool serHidden)
    {
        static_cast<void>(serHidden);
        using Field = ::cc_ublox::message::NavRelposned_v1Fields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::FlagsMembers::CarrSoln;
        return
            cc_tools_qt::property::field::ForField<Field>()
                .name(Field::name())
                .serialisedHidden(serHidden)
                .add("No carrier", 0)
                .add("Float solution", 1)
                .add("Fixed solution", 2)
                .asMap();
    }

    static QVariantMap createProps_bitsHigh(bool serHidden)
    {
        static_cast<void>(serHidden);
        using Field = ::cc_ublox::message::NavRelposned_v1Fields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::FlagsMembers::BitsHigh;
        return
            cc_tools_qt::property::field::ForField<Field>()
                .name(Field::name())
                .serialisedHidden(serHidden)
                .add(0U, "isMoving")
                .add(1U, "refPosMiss")
                .add(2U, "refObsMiss")
                .add(3U, "relPosHeadingValid")
                .asMap();
    }
}; // struct FlagsMembers

static QVariantMap createProps_flags(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::NavRelposned_v1Fields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::Flags;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .add(FlagsMembers::createProps_bitsLow(true))
            .add(FlagsMembers::createProps_carrSoln(true))
            .add(FlagsMembers::createProps_bitsHigh(true))
            .asMap();
}

QVariantList createProps()
{
    QVariantList props;
    props.append(createProps_version(false));
    props.append(createProps_reserved1(false));
    props.append(createProps_refStationId(false));
    props.append(createProps_itow(false));
    props.append(createProps_relPosN(false));
    props.append(createProps_relPosE(false));
    props.append(createProps_relPosD(false));
    props.append(createProps_relPosLength(false));
    props.append(createProps_relPosHeading(false));
    props.append(createProps_reserved2(false));
    props.append(createProps_relPosHPN(false));
    props.append(createProps_relPosHPE(false));
    props.append(createProps_relPosHPD(false));
    props.append(createProps_relPosHPLength(false));
    props.append(createProps_accN(false));
    props.append(createProps_accE(false));
    props.append(createProps_accD(false));
    props.append(createProps_accLength(false));
    props.append(createProps_accHeading(false));
    props.append(createProps_reserved3(false));
    props.append(createProps_flags(false));
    return props;
}

} // namespace

class NavRelposned_v1Impl : public
    cc_tools_qt::ProtocolMessageBase<
        ::cc_ublox::message::NavRelposned_v1<cc_tools_qt_plugin::cc_ublox::Message, cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>,
        NavRelposned_v1Impl
    >
{
public:
    NavRelposned_v1Impl() = default;
    NavRelposned_v1Impl(const NavRelposned_v1Impl&) = delete;
    NavRelposned_v1Impl(NavRelposned_v1Impl&&) = delete;
    virtual ~NavRelposned_v1Impl() = default;
    NavRelposned_v1Impl& operator=(const NavRelposned_v1Impl&) = default;
    NavRelposned_v1Impl& operator=(NavRelposned_v1Impl&&) = default;

protected:
    virtual const QVariantList& fieldsPropertiesImpl() const override
    {
        static const QVariantList Props = createProps();
        return Props;
    }
};

NavRelposned_v1::NavRelposned_v1() : m_pImpl(new NavRelposned_v1Impl) {}
NavRelposned_v1::~NavRelposned_v1() = default;

NavRelposned_v1& NavRelposned_v1::operator=(const NavRelposned_v1& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

NavRelposned_v1& NavRelposned_v1::operator=(NavRelposned_v1&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

NavRelposned_v1::MsgIdParamType NavRelposned_v1::doGetId()
{
    return ::cc_ublox::message::NavRelposned_v1<cc_tools_qt_plugin::cc_ublox::Message, cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::doGetId();
}

const char* NavRelposned_v1::nameImpl() const
{
    return static_cast<const cc_tools_qt::Message*>(m_pImpl.get())->name();
}

const QVariantList& NavRelposned_v1::fieldsPropertiesImpl() const
{
    return m_pImpl->fieldsProperties();
}

void NavRelposned_v1::dispatchImpl(cc_tools_qt::MessageHandler& handler)
{
    static_cast<cc_tools_qt::Message*>(m_pImpl.get())->dispatch(handler);
}

void NavRelposned_v1::resetImpl()
{
    m_pImpl->reset();
}

bool NavRelposned_v1::assignImpl(const cc_tools_qt::Message& other)
{
    auto* castedOther = dynamic_cast<const NavRelposned_v1*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

NavRelposned_v1::MsgIdParamType NavRelposned_v1::getIdImpl() const
{
    return m_pImpl->getId();
}

comms::ErrorStatus NavRelposned_v1::readImpl(ReadIterator& iter, std::size_t len)
{
    return m_pImpl->read(iter, len);
}

comms::ErrorStatus NavRelposned_v1::writeImpl(WriteIterator& iter, std::size_t len) const
{
    return m_pImpl->write(iter, len);
}

bool NavRelposned_v1::validImpl() const
{
    return m_pImpl->valid();
}

std::size_t NavRelposned_v1::lengthImpl() const
{
    return m_pImpl->length();
}

bool NavRelposned_v1::refreshImpl()
{
    return m_pImpl->refresh();
}

} // namespace message

} // namespace cc_ublox

} // namespace cc_tools_qt_plugin