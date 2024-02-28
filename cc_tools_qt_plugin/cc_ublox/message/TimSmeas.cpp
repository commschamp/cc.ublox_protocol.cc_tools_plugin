// Generated by commsdsl2tools_qt v6.3.0

#include "TimSmeas.h"

#include "cc_tools_qt/ProtocolMessageBase.h"
#include "cc_tools_qt/property/field.h"
#include "cc_tools_qt_plugin/cc_ublox/field/Itow.h"
#include "cc_tools_qt_plugin/cc_ublox/field/Res2.h"
#include "cc_tools_qt_plugin/cc_ublox/field/Res4.h"
#include "cc_tools_qt_plugin/cc_ublox/options/DefaultOptions.h"
#include "cc_ublox/message/TimSmeas.h"

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
    using Field = ::cc_ublox::message::TimSmeasFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::Version;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .asMap();
}

static QVariantMap createProps_numMeas(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::TimSmeasFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::NumMeas;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .readOnly()
            .asMap();
}

static QVariantMap createProps_reserved1(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::TimSmeasFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::Reserved1;
    auto props = cc_tools_qt_plugin::cc_ublox::field::createProps_res2(Field::name(), serHidden);
    return props;
}

static QVariantMap createProps_itow(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::TimSmeasFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::Itow;
    auto props = cc_tools_qt_plugin::cc_ublox::field::createProps_itow(Field::name(), serHidden);
    return props;
}

static QVariantMap createProps_reserved2(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::TimSmeasFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::Reserved2;
    auto props = cc_tools_qt_plugin::cc_ublox::field::createProps_res4(Field::name(), serHidden);
    return props;
}

struct ListMembers
{
    struct ElementMembers
    {
        static QVariantMap createProps_sourceId(bool serHidden)
        {
            static_cast<void>(serHidden);
            using Field = ::cc_ublox::message::TimSmeasFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::ListMembers::ElementMembers::SourceId;
            return
                cc_tools_qt::property::field::ForField<Field>()
                    .name(Field::name())
                    .serialisedHidden(serHidden)
                    .asMap();
        }

        static QVariantMap createProps_flags(bool serHidden)
        {
            static_cast<void>(serHidden);
            using Field = ::cc_ublox::message::TimSmeasFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::ListMembers::ElementMembers::Flags;
            return
                cc_tools_qt::property::field::ForField<Field>()
                    .name(Field::name())
                    .serialisedHidden(serHidden)
                    .add(0U, "freqValid")
                    .add(1U, "phaseValid")
                    .asMap();
        }

        static QVariantMap createProps_phaseOffsetFrac(bool serHidden)
        {
            static_cast<void>(serHidden);
            using Field = ::cc_ublox::message::TimSmeasFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::ListMembers::ElementMembers::PhaseOffsetFrac;
            return
                cc_tools_qt::property::field::ForField<Field>()
                    .name(Field::name())
                    .serialisedHidden(serHidden)
                    .scaledDecimals(8U)
                    .asMap();
        }

        static QVariantMap createProps_phaseUncFrac(bool serHidden)
        {
            static_cast<void>(serHidden);
            using Field = ::cc_ublox::message::TimSmeasFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::ListMembers::ElementMembers::PhaseUncFrac;
            return
                cc_tools_qt::property::field::ForField<Field>()
                    .name(Field::name())
                    .serialisedHidden(serHidden)
                    .scaledDecimals(8U)
                    .asMap();
        }

        static QVariantMap createProps_phaseOffset(bool serHidden)
        {
            static_cast<void>(serHidden);
            using Field = ::cc_ublox::message::TimSmeasFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::ListMembers::ElementMembers::PhaseOffset;
            return
                cc_tools_qt::property::field::ForField<Field>()
                    .name(Field::name())
                    .serialisedHidden(serHidden)
                    .asMap();
        }

        static QVariantMap createProps_phaseUnc(bool serHidden)
        {
            static_cast<void>(serHidden);
            using Field = ::cc_ublox::message::TimSmeasFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::ListMembers::ElementMembers::PhaseUnc;
            return
                cc_tools_qt::property::field::ForField<Field>()
                    .name(Field::name())
                    .serialisedHidden(serHidden)
                    .asMap();
        }

        static QVariantMap createProps_reserved3(bool serHidden)
        {
            static_cast<void>(serHidden);
            using Field = ::cc_ublox::message::TimSmeasFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::ListMembers::ElementMembers::Reserved3;
            auto props = cc_tools_qt_plugin::cc_ublox::field::createProps_res4(Field::name(), serHidden);
            return props;
        }

        static QVariantMap createProps_freqOffset(bool serHidden)
        {
            static_cast<void>(serHidden);
            using Field = ::cc_ublox::message::TimSmeasFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::ListMembers::ElementMembers::FreqOffset;
            return
                cc_tools_qt::property::field::ForField<Field>()
                    .name(Field::name())
                    .serialisedHidden(serHidden)
                    .scaledDecimals(8U)
                    .asMap();
        }

        static QVariantMap createProps_freqUnc(bool serHidden)
        {
            static_cast<void>(serHidden);
            using Field = ::cc_ublox::message::TimSmeasFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::ListMembers::ElementMembers::FreqUnc;
            return
                cc_tools_qt::property::field::ForField<Field>()
                    .name(Field::name())
                    .serialisedHidden(serHidden)
                    .scaledDecimals(8U)
                    .asMap();
        }
    }; // struct ElementMembers

    static QVariantMap createProps_element(bool serHidden)
    {
        static_cast<void>(serHidden);
        using Field = ::cc_ublox::message::TimSmeasFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::ListMembers::Element;
        return
            cc_tools_qt::property::field::ForField<Field>()
                .name(Field::name())
                .serialisedHidden(serHidden)
                .add(ElementMembers::createProps_sourceId(serHidden))
                .add(ElementMembers::createProps_flags(serHidden))
                .add(ElementMembers::createProps_phaseOffsetFrac(serHidden))
                .add(ElementMembers::createProps_phaseUncFrac(serHidden))
                .add(ElementMembers::createProps_phaseOffset(serHidden))
                .add(ElementMembers::createProps_phaseUnc(serHidden))
                .add(ElementMembers::createProps_reserved3(serHidden))
                .add(ElementMembers::createProps_freqOffset(serHidden))
                .add(ElementMembers::createProps_freqUnc(serHidden))
                .serialisedHidden()
                .asMap();
    }
}; // struct ListMembers

static QVariantMap createProps_list(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::TimSmeasFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::List;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .serialisedHidden()
            .add(ListMembers::createProps_element(serHidden))
            .appendIndexToElementName()
            .asMap();
}

QVariantList createProps()
{
    QVariantList props;
    props.append(createProps_version(false));
    props.append(createProps_numMeas(false));
    props.append(createProps_reserved1(false));
    props.append(createProps_itow(false));
    props.append(createProps_reserved2(false));
    props.append(createProps_list(false));
    return props;
}

} // namespace

class TimSmeasImpl : public
    cc_tools_qt::ProtocolMessageBase<
        ::cc_ublox::message::TimSmeas<cc_tools_qt_plugin::cc_ublox::Message, cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>,
        TimSmeasImpl
    >
{
public:
    TimSmeasImpl() = default;
    TimSmeasImpl(const TimSmeasImpl&) = delete;
    TimSmeasImpl(TimSmeasImpl&&) = delete;
    virtual ~TimSmeasImpl() = default;
    TimSmeasImpl& operator=(const TimSmeasImpl&) = default;
    TimSmeasImpl& operator=(TimSmeasImpl&&) = default;

protected:
    virtual const QVariantList& fieldsPropertiesImpl() const override
    {
        static const QVariantList Props = createProps();
        return Props;
    }
};

TimSmeas::TimSmeas() : m_pImpl(new TimSmeasImpl) {}
TimSmeas::~TimSmeas() = default;

TimSmeas& TimSmeas::operator=(const TimSmeas& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

TimSmeas& TimSmeas::operator=(TimSmeas&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

TimSmeas::MsgIdParamType TimSmeas::doGetId()
{
    return ::cc_ublox::message::TimSmeas<cc_tools_qt_plugin::cc_ublox::Message, cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::doGetId();
}

const char* TimSmeas::nameImpl() const
{
    return static_cast<const cc_tools_qt::Message*>(m_pImpl.get())->name();
}

const QVariantList& TimSmeas::fieldsPropertiesImpl() const
{
    return m_pImpl->fieldsProperties();
}

void TimSmeas::dispatchImpl(cc_tools_qt::MessageHandler& handler)
{
    static_cast<cc_tools_qt::Message*>(m_pImpl.get())->dispatch(handler);
}

void TimSmeas::resetImpl()
{
    m_pImpl->reset();
}

bool TimSmeas::assignImpl(const cc_tools_qt::Message& other)
{
    auto* castedOther = dynamic_cast<const TimSmeas*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

TimSmeas::MsgIdParamType TimSmeas::getIdImpl() const
{
    return m_pImpl->getId();
}

comms::ErrorStatus TimSmeas::readImpl(ReadIterator& iter, std::size_t len)
{
    return m_pImpl->read(iter, len);
}

comms::ErrorStatus TimSmeas::writeImpl(WriteIterator& iter, std::size_t len) const
{
    return m_pImpl->write(iter, len);
}

bool TimSmeas::validImpl() const
{
    return m_pImpl->valid();
}

std::size_t TimSmeas::lengthImpl() const
{
    return m_pImpl->length();
}

bool TimSmeas::refreshImpl()
{
    return m_pImpl->refresh();
}

} // namespace message

} // namespace cc_ublox

} // namespace cc_tools_qt_plugin
